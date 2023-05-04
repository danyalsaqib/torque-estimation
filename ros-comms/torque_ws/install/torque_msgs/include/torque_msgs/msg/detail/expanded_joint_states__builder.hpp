// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torque_msgs:msg/ExpandedJointStates.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__BUILDER_HPP_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__BUILDER_HPP_

#include "torque_msgs/msg/detail/expanded_joint_states__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torque_msgs
{

namespace msg
{

namespace builder
{

class Init_ExpandedJointStates_effort
{
public:
  explicit Init_ExpandedJointStates_effort(::torque_msgs::msg::ExpandedJointStates & msg)
  : msg_(msg)
  {}
  ::torque_msgs::msg::ExpandedJointStates effort(::torque_msgs::msg::ExpandedJointStates::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

class Init_ExpandedJointStates_acceleration
{
public:
  explicit Init_ExpandedJointStates_acceleration(::torque_msgs::msg::ExpandedJointStates & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointStates_effort acceleration(::torque_msgs::msg::ExpandedJointStates::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ExpandedJointStates_effort(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

class Init_ExpandedJointStates_velocity
{
public:
  explicit Init_ExpandedJointStates_velocity(::torque_msgs::msg::ExpandedJointStates & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointStates_acceleration velocity(::torque_msgs::msg::ExpandedJointStates::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ExpandedJointStates_acceleration(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

class Init_ExpandedJointStates_position
{
public:
  explicit Init_ExpandedJointStates_position(::torque_msgs::msg::ExpandedJointStates & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointStates_velocity position(::torque_msgs::msg::ExpandedJointStates::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ExpandedJointStates_velocity(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

class Init_ExpandedJointStates_name
{
public:
  explicit Init_ExpandedJointStates_name(::torque_msgs::msg::ExpandedJointStates & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointStates_position name(::torque_msgs::msg::ExpandedJointStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ExpandedJointStates_position(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

class Init_ExpandedJointStates_header
{
public:
  Init_ExpandedJointStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandedJointStates_name header(::torque_msgs::msg::ExpandedJointStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExpandedJointStates_name(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torque_msgs::msg::ExpandedJointStates>()
{
  return torque_msgs::msg::builder::Init_ExpandedJointStates_header();
}

}  // namespace torque_msgs

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__BUILDER_HPP_
