// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torque_msgs:msg/ExpandedJointState.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__TRAITS_HPP_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__TRAITS_HPP_

#include "torque_msgs/msg/detail/expanded_joint_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torque_msgs::msg::ExpandedJointState>()
{
  return "torque_msgs::msg::ExpandedJointState";
}

template<>
inline const char * name<torque_msgs::msg::ExpandedJointState>()
{
  return "torque_msgs/msg/ExpandedJointState";
}

template<>
struct has_fixed_size<torque_msgs::msg::ExpandedJointState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<torque_msgs::msg::ExpandedJointState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<torque_msgs::msg::ExpandedJointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__TRAITS_HPP_
