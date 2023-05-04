# torque-estimation
Working on a torque estimation pipeline for the Reachy robot. Still a work in progress!


## The Packages
So far, I have developed two packages within the workspace. The first one, 'torque_msgs', defines a new and expanded form of the JointState message type (found in sensor_msgs). The expanded form also has an acceleration array in place. The second one, 'reachy_vel_acc' defines a new Node, that subscribes to the 'joint_states' topic for reachy, and publishes to the new topic 'expanded_joint_states'. This topic gets forwarded all of the information from the 'joint_states_topic', as well as additional information. Currently, it outputs the velocity and acceleration of the joints as well. In the future, it is planned that it will output the efforts as well, though that is a much more complicated matter.

## The Setup
This is just additional information regarding ROS 2, and the setup beforehand for this package. This part should be skipped (go directly to the next section [**Using the Packages**](https://github.com/danyalsaqib/torque-estimation#using-the-packages)) if you simply want to set this package up. (Most of this section is simply taken from: https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries.html)

### Checking if the Reachy is working correctly
Any example for Reachy can be run to see if the robot is working correctly. If it is not, run the following commands:

```
sudo systemctl stop reachy_sdk_server.service
```
```
sudo systemctl start reachy_sdk_server.service
```

Reachy should start working correctly afterwards.

### reachy_vel_acc
Firstly, navigate to your workspace, and create a src folder. For example, if your workspace is called 'torque_ws', you can run the following commands:

```
cd torque_ws
```
```
mkdir src
``` 
In ROS 2, if we want to create a new python package, we use the following command:

```
ros2 pkg create --build-type ament_python reachy_vel_acc
```

For the python package, once the code has been written, make sure that you have also modified the 'setup.py', 'setup.cfg', and 'package.xml'.

### torque_msgs
To create a package for defining new message types (and service types, if required), you need to create a C++ package exclusively. This is regardless of whether you intend to use them with Python or C++:

```
ros2 pkg create --build-type ament_cmake torque_msgs
```

## Using the Packages
Copy the folder `ros-comms/torque_ws` to wherever you want to work with it. Then, change your working directory to 'torque_ws':

```
cd torque_ws
```

### Building the 'torque_msgs' package
Run the following command in the 'torque_ws' directory:

```
rosdep install -i --from-path src --rosdistro foxy -y
```
```
colcon build --packages-select tutorial_interfaces
```

You can test whether the package was built correctly by running the following commands:

```
source install/setup.bash
```
```
ros2 interface show torque_msgs/msg/ExpandedJointState
```

This command should display the details of the message type 'ExpandedJointState'

### Building the 'reachy_vel_acc' package
Run the following command in the 'torque_ws' directory:

```
rosdep install -i --from-path src --rosdistro foxy -y
```
```
colcon build --packages-select reachy_vel_acc
```

You can test whether the package was built correctly by running the following command:

```
source install/setup.bash
```
```
ros2 run reachy_vel_acc pub_vel_acc
```

This node, if it runs without errors, should start publishing to the 'expanded_joint_states'. You can check the output of this topic by running the following commands in a new terminal:

```
cd torque_ws
```
```
source install/setup.bash
```
```
ros2 topic list
```

The ROS 2 topic list should have the 'expanded_joint_states' topic listed. You can run the following command to see the data being published to this topic:

```
ros2 topic echo /expanded_joint_states
```

## Future Directions
1. Currently, the position information is quite noisy, and fluctuates quite a bit. This is causing the velocity and acceleration to be quite noisy as well. Implement some sort of a smoothing filter to smooth the position information (Moving Average / Low Pass).
2. Incorporate the dynamic equation to get an estimate of the torque (or perceived torque).
3. Finally, move on to obtaining the actual power dissipated within the motors to get a measure of the true motor torques.
4. The difference between perceived torque and actual motor torques should give us an estimate of the applied torques.
