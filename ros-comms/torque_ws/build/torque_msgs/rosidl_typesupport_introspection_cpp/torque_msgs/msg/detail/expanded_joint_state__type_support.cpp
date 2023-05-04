// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from torque_msgs:msg/ExpandedJointState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "torque_msgs/msg/detail/expanded_joint_state__struct.hpp"
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

void ExpandedJointState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) torque_msgs::msg::ExpandedJointState(_init);
}

void ExpandedJointState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<torque_msgs::msg::ExpandedJointState *>(message_memory);
  typed_message->~ExpandedJointState();
}

size_t size_function__ExpandedJointState__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointState__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointState__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointState__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointState__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointState__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointState__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointState__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointState__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointState__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointState__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointState__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointState__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointState__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointState__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointState__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpandedJointState__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpandedJointState__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpandedJointState__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ExpandedJointState__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExpandedJointState_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointState, header),  // bytes offset in struct
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
    offsetof(torque_msgs::msg::ExpandedJointState, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointState__name,  // size() function pointer
    get_const_function__ExpandedJointState__name,  // get_const(index) function pointer
    get_function__ExpandedJointState__name,  // get(index) function pointer
    resize_function__ExpandedJointState__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointState, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointState__position,  // size() function pointer
    get_const_function__ExpandedJointState__position,  // get_const(index) function pointer
    get_function__ExpandedJointState__position,  // get(index) function pointer
    resize_function__ExpandedJointState__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointState, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointState__velocity,  // size() function pointer
    get_const_function__ExpandedJointState__velocity,  // get_const(index) function pointer
    get_function__ExpandedJointState__velocity,  // get(index) function pointer
    resize_function__ExpandedJointState__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointState, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointState__acceleration,  // size() function pointer
    get_const_function__ExpandedJointState__acceleration,  // get_const(index) function pointer
    get_function__ExpandedJointState__acceleration,  // get(index) function pointer
    resize_function__ExpandedJointState__acceleration  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs::msg::ExpandedJointState, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpandedJointState__effort,  // size() function pointer
    get_const_function__ExpandedJointState__effort,  // get_const(index) function pointer
    get_function__ExpandedJointState__effort,  // get(index) function pointer
    resize_function__ExpandedJointState__effort  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExpandedJointState_message_members = {
  "torque_msgs::msg",  // message namespace
  "ExpandedJointState",  // message name
  6,  // number of fields
  sizeof(torque_msgs::msg::ExpandedJointState),
  ExpandedJointState_message_member_array,  // message members
  ExpandedJointState_init_function,  // function to initialize message memory (memory has to be allocated)
  ExpandedJointState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExpandedJointState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExpandedJointState_message_members,
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
get_message_type_support_handle<torque_msgs::msg::ExpandedJointState>()
{
  return &::torque_msgs::msg::rosidl_typesupport_introspection_cpp::ExpandedJointState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, torque_msgs, msg, ExpandedJointState)() {
  return &::torque_msgs::msg::rosidl_typesupport_introspection_cpp::ExpandedJointState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
