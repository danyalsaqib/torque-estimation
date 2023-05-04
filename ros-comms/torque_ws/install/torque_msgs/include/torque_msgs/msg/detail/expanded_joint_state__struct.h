// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torque_msgs:msg/ExpandedJointState.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__STRUCT_H_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/ExpandedJointState in the package torque_msgs.
typedef struct torque_msgs__msg__ExpandedJointState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence acceleration;
  rosidl_runtime_c__double__Sequence effort;
} torque_msgs__msg__ExpandedJointState;

// Struct for a sequence of torque_msgs__msg__ExpandedJointState.
typedef struct torque_msgs__msg__ExpandedJointState__Sequence
{
  torque_msgs__msg__ExpandedJointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torque_msgs__msg__ExpandedJointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATE__STRUCT_H_
