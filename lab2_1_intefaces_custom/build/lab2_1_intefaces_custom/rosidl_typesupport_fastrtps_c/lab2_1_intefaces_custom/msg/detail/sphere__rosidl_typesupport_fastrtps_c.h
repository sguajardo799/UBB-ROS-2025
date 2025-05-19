// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from lab2_1_intefaces_custom:msg/Sphere.idl
// generated code does not contain a copyright notice
#ifndef LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lab2_1_intefaces_custom/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lab2_1_intefaces_custom/msg/detail/sphere__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
bool cdr_serialize_lab2_1_intefaces_custom__msg__Sphere(
  const lab2_1_intefaces_custom__msg__Sphere * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
bool cdr_deserialize_lab2_1_intefaces_custom__msg__Sphere(
  eprosima::fastcdr::Cdr &,
  lab2_1_intefaces_custom__msg__Sphere * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
size_t get_serialized_size_lab2_1_intefaces_custom__msg__Sphere(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
size_t max_serialized_size_lab2_1_intefaces_custom__msg__Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
bool cdr_serialize_key_lab2_1_intefaces_custom__msg__Sphere(
  const lab2_1_intefaces_custom__msg__Sphere * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
size_t get_serialized_size_key_lab2_1_intefaces_custom__msg__Sphere(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
size_t max_serialized_size_key_lab2_1_intefaces_custom__msg__Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lab2_1_intefaces_custom
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lab2_1_intefaces_custom, msg, Sphere)();

#ifdef __cplusplus
}
#endif

#endif  // LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
