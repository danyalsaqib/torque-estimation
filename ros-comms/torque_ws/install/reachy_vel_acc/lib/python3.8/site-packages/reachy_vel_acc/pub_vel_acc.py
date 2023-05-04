import rclpy
import numpy as np

import os

from rclpy.node import Node

from std_msgs.msg import String, Float64MultiArray
from sensor_msgs.msg import JointState
from torque_msgs.msg import ExpandedJointState

class ExpandedStatePublisher(Node):

    def __init__(self):
        super().__init__('expanded_state_publisher')
        self.subscription = self.create_subscription(
            JointState,
            'joint_states',
            self.listener_callback,
            qos_profile=5,
        )
        
        self.expanded_joint_state_publisher = self.create_publisher(
            msg_type=ExpandedJointState,
            topic='expanded_joint_states',
            qos_profile=5,
        )

        self.delete_prev_save_files()


    def unpack_joint_state(self, joint_array):
        ret_array = np.array([])

        for val in joint_array:
            ret_array = np.append(ret_array, float(val))

        return ret_array


    def unpack_time_state(self, time_array):
        time_value = time_array.sec + (time_array.nanosec / 1000000000)
        return time_value


    def moving_average(self, pos, win_file_name, win_index_name, win_size=8):
        if (os.path.isfile(win_file_name)):
            pos_window = np.load(win_file_name)
        else:
            pos_window = np.zeros([win_size, len(pos)])

        if (os.path.isfile(win_index_name)):
            index = np.load(win_index_name)
        else:
            index = np.array([0])

        #print(size(pos_window))
        #print(index[0])
        
        pos_window[index[0]] = pos
        moving_avg = np.sum(pos_window, axis=0)
        moving_avg = moving_avg / win_size

        if index[0] == win_size - 1:
            index[0] = 0
        else:
            index[0] = index[0] + 1

        np.save(win_file_name, pos_window)
        np.save(win_index_name, index)

        return moving_avg


    def get_velocity_and_acceleration(self, pos_array, time_array):
        curr_pos = self.unpack_joint_state(pos_array)
        curr_pos = self.moving_average(curr_pos, win_file_name='pos_window.npy', win_index_name = 'pos_window_index.npy', win_size = 32)
        curr_time = self.unpack_time_state(time_array)
        
        if (os.path.isfile('prev_pos.npy')):
            prev_pos = np.load('prev_pos.npy')
        else:
            prev_pos = curr_pos

        if (os.path.isfile('prev_time.npy')):
            prev_time = np.load('prev_time.npy')
        else:
            prev_time = curr_time - 1

        d_pos = curr_pos - prev_pos
        d_time = curr_time - prev_time

        curr_vel = d_pos / d_time
        curr_vel = self.moving_average(curr_vel, win_file_name='vel_window.npy', win_index_name = 'vel_window_index.npy', win_size = 16)

        if (os.path.isfile('prev_vel.npy')):
            prev_vel = np.load('prev_vel.npy')
        else:
            prev_vel = curr_vel

        d_vel = curr_vel - prev_vel

        curr_acc = d_vel / d_time

        np.save('prev_pos.npy', curr_pos)
        np.save('prev_time.npy', curr_time)
        np.save('prev_vel.npy', curr_vel)

        curr_vel = curr_vel.tolist()
        curr_vel = [float(0) if x <= 0.001 else x for x in curr_vel]
        curr_acc = curr_acc.tolist()
        curr_acc = [float(0) if x <= 0.001 else x for x in curr_acc]

        curr_vel_arr = Float64MultiArray()
        curr_vel_arr.data = curr_vel

        curr_acc_arr = Float64MultiArray()
        curr_acc_arr.data = curr_acc

        return curr_vel_arr, curr_acc_arr


    def copy_joint_state_to_expanded(self, msg):
        expanded_joint_state = ExpandedJointState()
        expanded_joint_state.header = msg.header
        expanded_joint_state.name = msg.name
        expanded_joint_state.position = msg.position
        return expanded_joint_state

    def delete_prev_save_files(self):
        if (os.path.isfile('pos_window.npy')):
            os.remove('pos_window.npy')

        if (os.path.isfile('pos_window_index.npy')):
            os.remove('pos_window_index.npy')

        if (os.path.isfile('vel_window.npy')):
            os.remove('vel_window.npy')

        if (os.path.isfile('vel_window_index.npy')):
            os.remove('vel_window_index.npy')
        
        if (os.path.isfile('prev_pos.npy')):
            os.remove('prev_pos.npy')
        
        if (os.path.isfile('prev_time.npy')):
            os.remove('prev_time.npy')
        
        if (os.path.isfile('prev_vel.npy')):
            os.remove('prev_vel.npy')


    def listener_callback(self, msg):
        self.expanded_joint_state = self.copy_joint_state_to_expanded(msg)
        curr_vel, curr_acc = self.get_velocity_and_acceleration(self.expanded_joint_state.position, self.expanded_joint_state.header.stamp)
        self.expanded_joint_state.velocity = curr_vel.data
        self.expanded_joint_state.acceleration = curr_acc.data
        #self.get_logger().info('Publishing: "%s"' % self.expanded_joint_state)
        self.expanded_joint_state_publisher.publish(self.expanded_joint_state)


def main(args=None):
    rclpy.init(args=args)

    expanded_state_publisher = ExpandedStatePublisher()

    rclpy.spin(expanded_state_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    expanded_state_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()