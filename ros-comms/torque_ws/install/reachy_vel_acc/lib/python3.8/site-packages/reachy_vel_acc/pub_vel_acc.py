import rclpy
import numpy as np

import os.path 

from rclpy.node import Node

from std_msgs.msg import String, Float64MultiArray
from sensor_msgs.msg import JointState
from torque_msgs.msg import ExpandedJointState

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            JointState,
            'joint_states',
            self.listener_callback,
            qos_profile=5,
        )
        
        # self.subscription  # prevent unused variable warning
        self.expanded_joint_state_publisher = self.create_publisher(
            msg_type=ExpandedJointState,
            topic='expanded_joint_states',
            qos_profile=5,
        )

        #self.joint_state_publisher = self.create_publisher(
        #    msg_type=Float64MultiArray,
        #    topic='expanded_joint_states',
        #    qos_profile=10,
        #)

        # self.expanded_joint_state = JointState()
    
    #def unpack_joint_state(self, joint_array):
    #    ret_array = Float64MultiArray()
    #
    #    for val in joint_array:
    #        ret_array.data.append(float(val))
    #
    #    return ret_array

    def unpack_joint_state(self, joint_array):
        ret_array = np.array([])

        for val in joint_array:
            ret_array = np.append(ret_array, float(val))

        return ret_array

    def unpack_time_state(self, time_array):
        time_value = time_array.sec + (time_array.nanosec / 1000000000)
        return time_value

    def get_velocity_and_acceleration(self, pos_array, time_array):
        curr_pos = self.unpack_joint_state(pos_array)
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
        curr_acc = curr_acc.tolist()

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

    def listener_callback(self, msg):
        self.expanded_joint_state = self.copy_joint_state_to_expanded(msg)
        curr_vel, curr_acc = self.get_velocity_and_acceleration(self.expanded_joint_state.position, self.expanded_joint_state.header.stamp)
        self.expanded_joint_state.velocity = curr_vel.data
        self.expanded_joint_state.acceleration = curr_acc.data
        #self.get_logger().info('Publishing: "%s"' % self.expanded_joint_state)
        self.expanded_joint_state_publisher.publish(self.expanded_joint_state)




        #position_array = self.unpack_joint_state(msg.position)
        #time_value = self.unpack_time_state(msg.header.stamp)
        #self.get_logger().info('Publishing: "%s"' % position_array)
        #self.joint_state_publisher.publish(position_array)

        #self.to_be_published_expanded_joint_state = JointState()
        #self.to_be_published_expanded_joint_state.header = msg.header
        #self.get_logger().info('Publishing: "%s"' % self.to_be_published_expanded_joint_state.header.stamp.sec)
        #self.get_logger().info('Publishing: "%s"' % self.to_be_published_expanded_joint_state.header.stamp.nanosec)
        
        #self.joint_state_publisher.publish(self.expanded_joint_state)

        #for i, name in enumerate(msg.name):
        #    if msg.name:
        #        self.expanded_joint_state.name[i] = msg.name[i]
        #    if msg.position:
        #        self.expanded_joint_state.position[i] = msg.position[i]
        #    if msg.velocity:
        #    if msg.effort:
        #        self.expanded_joint_state.effort[i] = msg.effort[i]

        #self.get_logger().info('Publishing: "%s"' % self.expanded_joint_state)



def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()