// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/srv/add_four_ints.h"


#ifndef LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_H_
#define LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddFourInts in the package lab2_1_intefaces_custom.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
  int64_t d;
} lab2_1_intefaces_custom__srv__AddFourInts_Request;

// Struct for a sequence of lab2_1_intefaces_custom__srv__AddFourInts_Request.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence
{
  lab2_1_intefaces_custom__srv__AddFourInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddFourInts in the package lab2_1_intefaces_custom.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Response
{
  int64_t sum;
} lab2_1_intefaces_custom__srv__AddFourInts_Response;

// Struct for a sequence of lab2_1_intefaces_custom__srv__AddFourInts_Response.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence
{
  lab2_1_intefaces_custom__srv__AddFourInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lab2_1_intefaces_custom__srv__AddFourInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lab2_1_intefaces_custom__srv__AddFourInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddFourInts in the package lab2_1_intefaces_custom.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lab2_1_intefaces_custom__srv__AddFourInts_Request__Sequence request;
  lab2_1_intefaces_custom__srv__AddFourInts_Response__Sequence response;
} lab2_1_intefaces_custom__srv__AddFourInts_Event;

// Struct for a sequence of lab2_1_intefaces_custom__srv__AddFourInts_Event.
typedef struct lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence
{
  lab2_1_intefaces_custom__srv__AddFourInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab2_1_intefaces_custom__srv__AddFourInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__STRUCT_H_
