// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torque_msgs:msg/ExpandedJointState.idl
// generated code does not contain a copyright notice
#include "torque_msgs/msg/detail/expanded_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
torque_msgs__msg__ExpandedJointState__init(torque_msgs__msg__ExpandedJointState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration, 0)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__init(&msg->effort, 0)) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
    return false;
  }
  return true;
}

void
torque_msgs__msg__ExpandedJointState__fini(torque_msgs__msg__ExpandedJointState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration);
  // effort
  rosidl_runtime_c__double__Sequence__fini(&msg->effort);
}

bool
torque_msgs__msg__ExpandedJointState__are_equal(const torque_msgs__msg__ExpandedJointState * lhs, const torque_msgs__msg__ExpandedJointState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->effort), &(rhs->effort)))
  {
    return false;
  }
  return true;
}

bool
torque_msgs__msg__ExpandedJointState__copy(
  const torque_msgs__msg__ExpandedJointState * input,
  torque_msgs__msg__ExpandedJointState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->effort), &(output->effort)))
  {
    return false;
  }
  return true;
}

torque_msgs__msg__ExpandedJointState *
torque_msgs__msg__ExpandedJointState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_msgs__msg__ExpandedJointState * msg = (torque_msgs__msg__ExpandedJointState *)allocator.allocate(sizeof(torque_msgs__msg__ExpandedJointState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torque_msgs__msg__ExpandedJointState));
  bool success = torque_msgs__msg__ExpandedJointState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
torque_msgs__msg__ExpandedJointState__destroy(torque_msgs__msg__ExpandedJointState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    torque_msgs__msg__ExpandedJointState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
torque_msgs__msg__ExpandedJointState__Sequence__init(torque_msgs__msg__ExpandedJointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_msgs__msg__ExpandedJointState * data = NULL;

  if (size) {
    data = (torque_msgs__msg__ExpandedJointState *)allocator.zero_allocate(size, sizeof(torque_msgs__msg__ExpandedJointState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torque_msgs__msg__ExpandedJointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torque_msgs__msg__ExpandedJointState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
torque_msgs__msg__ExpandedJointState__Sequence__fini(torque_msgs__msg__ExpandedJointState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      torque_msgs__msg__ExpandedJointState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

torque_msgs__msg__ExpandedJointState__Sequence *
torque_msgs__msg__ExpandedJointState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  torque_msgs__msg__ExpandedJointState__Sequence * array = (torque_msgs__msg__ExpandedJointState__Sequence *)allocator.allocate(sizeof(torque_msgs__msg__ExpandedJointState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = torque_msgs__msg__ExpandedJointState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
torque_msgs__msg__ExpandedJointState__Sequence__destroy(torque_msgs__msg__ExpandedJointState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    torque_msgs__msg__ExpandedJointState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
torque_msgs__msg__ExpandedJointState__Sequence__are_equal(const torque_msgs__msg__ExpandedJointState__Sequence * lhs, const torque_msgs__msg__ExpandedJointState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!torque_msgs__msg__ExpandedJointState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
torque_msgs__msg__ExpandedJointState__Sequence__copy(
  const torque_msgs__msg__ExpandedJointState__Sequence * input,
  torque_msgs__msg__ExpandedJointState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(torque_msgs__msg__ExpandedJointState);
    torque_msgs__msg__ExpandedJointState * data =
      (torque_msgs__msg__ExpandedJointState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!torque_msgs__msg__ExpandedJointState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          torque_msgs__msg__ExpandedJointState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!torque_msgs__msg__ExpandedJointState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
