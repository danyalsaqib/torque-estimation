// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from torque_msgs:msg/ExpandedJointStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "torque_msgs/msg/detail/expanded_joint_states__rosidl_typesupport_introspection_c.h"
#include "torque_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "torque_msgs/msg/detail/expanded_joint_states__functions.h"
#include "torque_msgs/msg/detail/expanded_joint_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  torque_msgs__msg__ExpandedJointStates__init(message_memory);
}

void ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_fini_function(void * message_memory)
{
  torque_msgs__msg__ExpandedJointStates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(torque_msgs__msg__ExpandedJointStates, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_members = {
  "torque_msgs__msg",  // message namespace
  "ExpandedJointStates",  // message name
  6,  // number of fields
  sizeof(torque_msgs__msg__ExpandedJointStates),
  ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_member_array,  // message members
  ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_init_function,  // function to initialize message memory (memory has to be allocated)
  ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_type_support_handle = {
  0,
  &ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_torque_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, torque_msgs, msg, ExpandedJointStates)() {
  ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_type_support_handle.typesupport_identifier) {
    ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExpandedJointStates__rosidl_typesupport_introspection_c__ExpandedJointStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
