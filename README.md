# torque-estimation
Working on a torque estimation pipeline for the Reachy robot. Still a work in progress!


## The Packages
So far, I have developed two packages within the workspace. The first one, 'torque_msgs', defines a new and expanded form of the JointState message type (found in sensor_msgs). The expanded form also has an acceleration array in place. The second one, 'reachy_vel_acc' defines a new Node, that subscribes to the 'joint_states' topic for reachy, and publishes to the new topic 'expanded_joint_states'. This topic gets forwarded all of the information from the 'joint_states_topic', as well as additional information. Currently, it outputs the velocity and acceleration of the joints as well. In the future, it is planned that it will output the efforts as well, though that is a much more complicated matter.

## The Setup
This is just additional information regarding ROS 2, and the setup beforehand for this package. This part should be skipped if you simply want to set this package up.

### reachy_vel_acc
Firstly, navigate to your workspace, and create a src folder. For example, if your workspace is called 'torque_ws', you can run the following commands:

```
cd torque_ws
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
