// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from torque_msgs:msg/ExpandedJointStates.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__FUNCTIONS_H_
#define TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "torque_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "torque_msgs/msg/detail/expanded_joint_states__struct.h"

/// Initialize msg/ExpandedJointStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * torque_msgs__msg__ExpandedJointStates
 * )) before or use
 * torque_msgs__msg__ExpandedJointStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__init(torque_msgs__msg__ExpandedJointStates * msg);

/// Finalize msg/ExpandedJointStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
void
torque_msgs__msg__ExpandedJointStates__fini(torque_msgs__msg__ExpandedJointStates * msg);

/// Create msg/ExpandedJointStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * torque_msgs__msg__ExpandedJointStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
torque_msgs__msg__ExpandedJointStates *
torque_msgs__msg__ExpandedJointStates__create();

/// Destroy msg/ExpandedJointStates message.
/**
 * It calls
 * torque_msgs__msg__ExpandedJointStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
void
torque_msgs__msg__ExpandedJointStates__destroy(torque_msgs__msg__ExpandedJointStates * msg);

/// Check for msg/ExpandedJointStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__are_equal(const torque_msgs__msg__ExpandedJointStates * lhs, const torque_msgs__msg__ExpandedJointStates * rhs);

/// Copy a msg/ExpandedJointStates message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__copy(
  const torque_msgs__msg__ExpandedJointStates * input,
  torque_msgs__msg__ExpandedJointStates * output);

/// Initialize array of msg/ExpandedJointStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * torque_msgs__msg__ExpandedJointStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__Sequence__init(torque_msgs__msg__ExpandedJointStates__Sequence * array, size_t size);

/// Finalize array of msg/ExpandedJointStates messages.
/**
 * It calls
 * torque_msgs__msg__ExpandedJointStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
void
torque_msgs__msg__ExpandedJointStates__Sequence__fini(torque_msgs__msg__ExpandedJointStates__Sequence * array);

/// Create array of msg/ExpandedJointStates messages.
/**
 * It allocates the memory for the array and calls
 * torque_msgs__msg__ExpandedJointStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
torque_msgs__msg__ExpandedJointStates__Sequence *
torque_msgs__msg__ExpandedJointStates__Sequence__create(size_t size);

/// Destroy array of msg/ExpandedJointStates messages.
/**
 * It calls
 * torque_msgs__msg__ExpandedJointStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
void
torque_msgs__msg__ExpandedJointStates__Sequence__destroy(torque_msgs__msg__ExpandedJointStates__Sequence * array);

/// Check for msg/ExpandedJointStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__Sequence__are_equal(const torque_msgs__msg__ExpandedJointStates__Sequence * lhs, const torque_msgs__msg__ExpandedJointStates__Sequence * rhs);

/// Copy an array of msg/ExpandedJointStates messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_msgs
bool
torque_msgs__msg__ExpandedJointStates__Sequence__copy(
  const torque_msgs__msg__ExpandedJointStates__Sequence * input,
  torque_msgs__msg__ExpandedJointStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_MSGS__MSG__DETAIL__EXPANDED_JOINT_STATES__FUNCTIONS_H_
