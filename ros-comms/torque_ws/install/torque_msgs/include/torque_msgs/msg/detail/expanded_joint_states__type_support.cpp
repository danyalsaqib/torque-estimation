// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from torque_msgs:msg/ExpandedJointStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "torque_msgs/msg/detail/expanded_joint_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace torque_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExpandedJointStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) torque_msgs::msg::ExpandedJointStates(_init);
}

void ExpandedJointStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<torque_msgs::msg::ExpandedJointStates *>(message_memory);
  typed_message->~ExpandedJointStates();
}

size_t size_function__ExpandedJointStates__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointStates__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointStates__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointStates__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointStates__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointStates__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointStates__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointStates__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointStates__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointStates__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointStates__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointStates__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointStates__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointStates__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointStates__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointStates__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointStates__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointStates__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointStates__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointStates__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExpandedJointStates_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointStates__name,  // size() function pointer
    get_const_function__ExpandedJointStates__name,  // get_const(index) function pointer
    get_function__ExpandedJointStates__name,  // get(index) function pointer
    resize_function__ExpandedJointStates__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointStates__position,  // size() function pointer
    get_const_function__ExpandedJointStates__position,  // get_const(index) function pointer
    get_function__ExpandedJointStates__position,  // get(index) function pointer
    resize_function__ExpandedJointStates__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointStates__velocity,  // size() function pointer
    get_const_function__ExpandedJointStates__velocity,  // get_const(index) function pointer
    get_function__ExpandedJointStates__velocity,  // get(index) function pointer
    resize_function__ExpandedJointStates__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointStates__acceleration,  // size() function pointer
    get_const_function__ExpandedJointStates__acceleration,  // get_const(index) function pointer
    get_function__ExpandedJointStates__acceleration,  // get(index) function pointer
    resize_function__ExpandedJointStates__acceleration  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointStates, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointStates__effort,  // size() function pointer
    get_const_function__ExpandedJointStates__effort,  // get_const(index) function pointer
    get_function__ExpandedJointStates__effort,  // get(index) function pointer
    resize_function__ExpandedJointStates__effort  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExpandedJointStates_message_members = {
  "torque_msgs::msg",  // message namespace
  "ExpandedJointStates",  // message name
  6,  // number of fields
  sizeof(torque_msgs::msg::ExpandedJointStates),
  ExpandedJointStates_message_member_array,  // message members
  ExpandedJointStates_init_function,  // function to initialize message memory (memory has to be allocated)
  ExpandedJointStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExpandedJointStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExpandedJointStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace torque_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<torque_msgs::msg::ExpandedJointStates>()
{
  return &::torque_msgs::msg::rosidl_typesupport_introspection_cpp::ExpandedJointStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, torque_msgs, msg, ExpandedJointStates)() {
  return &::torque_msgs::msg::rosidl_typesupport_introspection_cpp::ExpandedJointStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
