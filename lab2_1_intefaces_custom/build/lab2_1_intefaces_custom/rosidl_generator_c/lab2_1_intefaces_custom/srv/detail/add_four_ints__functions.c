// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice
#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__init(lab2_1_intefaces_custom__srv__AddFourInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  // d
  return true;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Request__fini(lab2_1_intefaces_custom__srv__AddFourInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
  // d
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Request * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Request * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  // d
  output->d = input->d;
  return true;
}

lab2_1_intefaces_custom__srv__AddFourInts_Request *
lab2_1_intefaces_custom__srv__AddFourInts_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Request * msg = (lab2_1_intefaces_custom__srv__AddFourInts_Request *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Request));
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Request__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab2_1_intefaces_custom__srv__AddFourInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__init(lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Request * data = NULL;

  if (size) {
    data = (lab2_1_intefaces_custom__srv__AddFourInts_Request *)allocator.zero_allocate(size, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab2_1_intefaces_custom__srv__AddFourInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab2_1_intefaces_custom__srv__AddFourInts_Request__fini(&data[i - 1]);
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
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__fini(lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * array)
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
      lab2_1_intefaces_custom__srv__AddFourInts_Request__fini(&array->data[i]);
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

lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * array = (lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab2_1_intefaces_custom__srv__AddFourInts_Request * data =
      (lab2_1_intefaces_custom__srv__AddFourInts_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab2_1_intefaces_custom__srv__AddFourInts_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__init(lab2_1_intefaces_custom__srv__AddFourInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Response__fini(lab2_1_intefaces_custom__srv__AddFourInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Response * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Response * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

lab2_1_intefaces_custom__srv__AddFourInts_Response *
lab2_1_intefaces_custom__srv__AddFourInts_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Response * msg = (lab2_1_intefaces_custom__srv__AddFourInts_Response *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Response));
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Response__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab2_1_intefaces_custom__srv__AddFourInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__init(lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Response * data = NULL;

  if (size) {
    data = (lab2_1_intefaces_custom__srv__AddFourInts_Response *)allocator.zero_allocate(size, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab2_1_intefaces_custom__srv__AddFourInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab2_1_intefaces_custom__srv__AddFourInts_Response__fini(&data[i - 1]);
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
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__fini(lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * array)
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
      lab2_1_intefaces_custom__srv__AddFourInts_Response__fini(&array->data[i]);
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

lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * array = (lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab2_1_intefaces_custom__srv__AddFourInts_Response * data =
      (lab2_1_intefaces_custom__srv__AddFourInts_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab2_1_intefaces_custom__srv__AddFourInts_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"

bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__init(lab2_1_intefaces_custom__srv__AddFourInts_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(msg);
    return false;
  }
  // request
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__init(&msg->request, 0)) {
    lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(msg);
    return false;
  }
  // response
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__init(&msg->response, 0)) {
    lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(msg);
    return false;
  }
  return true;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(lab2_1_intefaces_custom__srv__AddFourInts_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__fini(&msg->request);
  // response
  lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__fini(&msg->response);
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Event * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Event * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

lab2_1_intefaces_custom__srv__AddFourInts_Event *
lab2_1_intefaces_custom__srv__AddFourInts_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Event * msg = (lab2_1_intefaces_custom__srv__AddFourInts_Event *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Event));
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Event__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__init(lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Event * data = NULL;

  if (size) {
    data = (lab2_1_intefaces_custom__srv__AddFourInts_Event *)allocator.zero_allocate(size, sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab2_1_intefaces_custom__srv__AddFourInts_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(&data[i - 1]);
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
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__fini(lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * array)
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
      lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(&array->data[i]);
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

lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * array = (lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence *)allocator.allocate(sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__destroy(lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__are_equal(const lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * lhs, const lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence__copy(
  const lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * input,
  lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab2_1_intefaces_custom__srv__AddFourInts_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab2_1_intefaces_custom__srv__AddFourInts_Event * data =
      (lab2_1_intefaces_custom__srv__AddFourInts_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab2_1_intefaces_custom__srv__AddFourInts_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab2_1_intefaces_custom__srv__AddFourInts_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab2_1_intefaces_custom__srv__AddFourInts_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
