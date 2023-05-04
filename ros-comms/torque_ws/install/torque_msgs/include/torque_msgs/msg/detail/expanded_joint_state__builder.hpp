// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torque_msgs:msg/ExpandedJointState.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__BUILDER_HPP_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__BUILDER_HPP_

#include "torque_msgs/msg/detail/expanded_joint_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torque_msgs
{

namespace msg
{

namespace builder
{

class Init_ExpandedJointState_effort
{
public:
  explicit Init_ExpandedJointState_effort(::torque_msgs::msg::ExpandedJointState & msg)
  : msg_(msg)
  {}
  ::torque_msgs::msg::ExpandedJointState effort(::torque_msgs::msg::ExpandedJointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

class Init_ExpandedJointState_acceleration
{
public:
  explicit Init_ExpandedJointState_acceleration(::torque_msgs::msg::ExpandedJointState & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointState_effort acceleration(::torque_msgs::msg::ExpandedJointState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ExpandedJointState_effort(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

class Init_ExpandedJointState_velocity
{
public:
  explicit Init_ExpandedJointState_velocity(::torque_msgs::msg::ExpandedJointState & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointState_acceleration velocity(::torque_msgs::msg::ExpandedJointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ExpandedJointState_acceleration(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

class Init_ExpandedJointState_position
{
public:
  explicit Init_ExpandedJointState_position(::torque_msgs::msg::ExpandedJointState & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointState_velocity position(::torque_msgs::msg::ExpandedJointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ExpandedJointState_velocity(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

class Init_ExpandedJointState_name
{
public:
  explicit Init_ExpandedJointState_name(::torque_msgs::msg::ExpandedJointState & msg)
  : msg_(msg)
  {}
  Init_ExpandedJointState_position name(::torque_msgs::msg::ExpandedJointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ExpandedJointState_position(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

class Init_ExpandedJointState_header
{
public:
  Init_ExpandedJointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandedJointState_name header(::torque_msgs::msg::ExpandedJointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExpandedJointState_name(msg_);
  }

private:
  ::torque_msgs::msg::ExpandedJointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torque_msgs::msg::ExpandedJointState>()
{
  return torque_msgs::msg::builder::Init_ExpandedJointState_header();
}

}  // namespace torque_msgs

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__BUILDER_HPP_
