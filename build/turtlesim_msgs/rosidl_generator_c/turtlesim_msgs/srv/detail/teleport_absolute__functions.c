// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_msgs:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice
#include "turtlesim_msgs/srv/detail/teleport_absolute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtlesim_msgs__srv__TeleportAbsolute_Request__init(turtlesim_msgs__srv__TeleportAbsolute_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Request__fini(turtlesim_msgs__srv__TeleportAbsolute_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Request__are_equal(const turtlesim_msgs__srv__TeleportAbsolute_Request * lhs, const turtlesim_msgs__srv__TeleportAbsolute_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Request__copy(
  const turtlesim_msgs__srv__TeleportAbsolute_Request * input,
  turtlesim_msgs__srv__TeleportAbsolute_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

turtlesim_msgs__srv__TeleportAbsolute_Request *
turtlesim_msgs__srv__TeleportAbsolute_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Request * msg = (turtlesim_msgs__srv__TeleportAbsolute_Request *)allocator.allocate(sizeof(turtlesim_msgs__srv__TeleportAbsolute_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__srv__TeleportAbsolute_Request));
  bool success = turtlesim_msgs__srv__TeleportAbsolute_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Request__destroy(turtlesim_msgs__srv__TeleportAbsolute_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__srv__TeleportAbsolute_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__init(turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Request * data = NULL;

  if (size) {
    data = (turtlesim_msgs__srv__TeleportAbsolute_Request *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__srv__TeleportAbsolute_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__srv__TeleportAbsolute_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__srv__TeleportAbsolute_Request__fini(&data[i - 1]);
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
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__fini(turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * array)
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
      turtlesim_msgs__srv__TeleportAbsolute_Request__fini(&array->data[i]);
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

turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence *
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * array = (turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__destroy(turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__are_equal(const turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * lhs, const turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__srv__TeleportAbsolute_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence__copy(
  const turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * input,
  turtlesim_msgs__srv__TeleportAbsolute_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__srv__TeleportAbsolute_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__srv__TeleportAbsolute_Request * data =
      (turtlesim_msgs__srv__TeleportAbsolute_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__srv__TeleportAbsolute_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__srv__TeleportAbsolute_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__srv__TeleportAbsolute_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_msgs__srv__TeleportAbsolute_Response__init(turtlesim_msgs__srv__TeleportAbsolute_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Response__fini(turtlesim_msgs__srv__TeleportAbsolute_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Response__are_equal(const turtlesim_msgs__srv__TeleportAbsolute_Response * lhs, const turtlesim_msgs__srv__TeleportAbsolute_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Response__copy(
  const turtlesim_msgs__srv__TeleportAbsolute_Response * input,
  turtlesim_msgs__srv__TeleportAbsolute_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

turtlesim_msgs__srv__TeleportAbsolute_Response *
turtlesim_msgs__srv__TeleportAbsolute_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Response * msg = (turtlesim_msgs__srv__TeleportAbsolute_Response *)allocator.allocate(sizeof(turtlesim_msgs__srv__TeleportAbsolute_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_msgs__srv__TeleportAbsolute_Response));
  bool success = turtlesim_msgs__srv__TeleportAbsolute_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Response__destroy(turtlesim_msgs__srv__TeleportAbsolute_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_msgs__srv__TeleportAbsolute_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__init(turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Response * data = NULL;

  if (size) {
    data = (turtlesim_msgs__srv__TeleportAbsolute_Response *)allocator.zero_allocate(size, sizeof(turtlesim_msgs__srv__TeleportAbsolute_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_msgs__srv__TeleportAbsolute_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_msgs__srv__TeleportAbsolute_Response__fini(&data[i - 1]);
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
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__fini(turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * array)
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
      turtlesim_msgs__srv__TeleportAbsolute_Response__fini(&array->data[i]);
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

turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence *
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * array = (turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence *)allocator.allocate(sizeof(turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__destroy(turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__are_equal(const turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * lhs, const turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_msgs__srv__TeleportAbsolute_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence__copy(
  const turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * input,
  turtlesim_msgs__srv__TeleportAbsolute_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_msgs__srv__TeleportAbsolute_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_msgs__srv__TeleportAbsolute_Response * data =
      (turtlesim_msgs__srv__TeleportAbsolute_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_msgs__srv__TeleportAbsolute_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_msgs__srv__TeleportAbsolute_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_msgs__srv__TeleportAbsolute_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
