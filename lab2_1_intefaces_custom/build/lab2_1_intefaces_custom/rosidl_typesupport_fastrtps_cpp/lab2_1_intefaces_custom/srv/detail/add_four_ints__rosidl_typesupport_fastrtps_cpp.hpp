// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

#ifndef LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "lab2_1_intefaces_custom/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize(
  const lab2_1_intefaces_custom::srv::AddFourInts_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lab2_1_intefaces_custom::srv::AddFourInts_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size(
  const lab2_1_intefaces_custom::srv::AddFourInts_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_AddFourInts_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Request & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_key_AddFourInts_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "lab2_1_intefaces_custom/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize(
  const lab2_1_intefaces_custom::srv::AddFourInts_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lab2_1_intefaces_custom::srv::AddFourInts_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size(
  const lab2_1_intefaces_custom::srv::AddFourInts_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_AddFourInts_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Response & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_key_AddFourInts_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include <cstddef>
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "lab2_1_intefaces_custom/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize(
  const lab2_1_intefaces_custom::srv::AddFourInts_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lab2_1_intefaces_custom::srv::AddFourInts_Event & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size(
  const lab2_1_intefaces_custom::srv::AddFourInts_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_AddFourInts_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
cdr_serialize_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Event & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
get_serialized_size_key(
  const lab2_1_intefaces_custom::srv::AddFourInts_Event & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
max_serialized_size_key_AddFourInts_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Event)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "lab2_1_intefaces_custom/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab2_1_intefaces_custom
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts)();

#ifdef __cplusplus
}
#endif

#endif  // LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
