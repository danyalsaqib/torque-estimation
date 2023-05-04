// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torque_msgs:msg/ExpandedJointStates.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__STRUCT_HPP_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__torque_msgs__msg__ExpandedJointStates __attribute__((deprecated))
#else
# define DEPRECATED__torque_msgs__msg__ExpandedJointStates __declspec(deprecated)
#endif

namespace torque_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExpandedJointStates_
{
  using Type = ExpandedJointStates_<ContainerAllocator>;

  explicit ExpandedJointStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ExpandedJointStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _position_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _position_type position;
  using _velocity_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocity_type velocity;
  using _acceleration_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _acceleration_type acceleration;
  using _effort_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _effort_type effort;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__effort(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->effort = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torque_msgs__msg__ExpandedJointStates
    std::shared_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torque_msgs__msg__ExpandedJointStates
    std::shared_ptr<torque_msgs::msg::ExpandedJointStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExpandedJointStates_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExpandedJointStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExpandedJointStates_

// alias to use template instance with default allocator
using ExpandedJointStates =
  torque_msgs::msg::ExpandedJointStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torque_msgs

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__STRUCT_HPP_
