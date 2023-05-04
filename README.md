# torque-estimation
Working on a torque estimation pipeline for the Reachy robot. Still a work in progress!


## The Packages
So far, I have developed two packages within the workspace. The first one, 'torque_msgs', defines a new and expanded form of the JointState message type (found in sensor_msgs). The expanded form also has an acceleration array in place. The second one, 'reachy_vel_acc' defines a new Node, that subscribes to the 'joint_states' topic for reachy, and publishes to the new topic 'expanded_joint_states'. This topic gets forwarded all of the information from the 'joint_states_topic', as well as additional information. Currently, it outputs the velocity and acceleration of the joints as well. In the future, it is planned that it will output the efforts as well, though that is a much more complicated matter.
