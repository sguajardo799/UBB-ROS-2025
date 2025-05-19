// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lab2_1_intefaces_custom:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/msg/sphere.h"


#ifndef LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_H_
#define LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package lab2_1_intefaces_custom.
typedef struct lab2_1_intefaces_custom__msg__Sphere
{
  geometry_msgs__msg__Point center;
  double radius;
} lab2_1_intefaces_custom__msg__Sphere;

// Struct for a sequence of lab2_1_intefaces_custom__msg__Sphere.
typedef struct lab2_1_intefaces_custom__msg__Sphere__Sequence
{
  lab2_1_intefaces_custom__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab2_1_intefaces_custom__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_H_
