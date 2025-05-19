// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/srv/add_four_ints.hpp"


#ifndef LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__TRAITS_HPP_
#define LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lab2_1_intefaces_custom
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddFourInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddFourInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddFourInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_generator_traits
{

[[deprecated("use lab2_1_intefaces_custom::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab2_1_intefaces_custom::srv::AddFourInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab2_1_intefaces_custom::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab2_1_intefaces_custom::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab2_1_intefaces_custom::srv::AddFourInts_Request & msg)
{
  return lab2_1_intefaces_custom::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab2_1_intefaces_custom::srv::AddFourInts_Request>()
{
  return "lab2_1_intefaces_custom::srv::AddFourInts_Request";
}

template<>
inline const char * name<lab2_1_intefaces_custom::srv::AddFourInts_Request>()
{
  return "lab2_1_intefaces_custom/srv/AddFourInts_Request";
}

template<>
struct has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab2_1_intefaces_custom::srv::AddFourInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lab2_1_intefaces_custom
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddFourInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddFourInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddFourInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_generator_traits
{

[[deprecated("use lab2_1_intefaces_custom::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab2_1_intefaces_custom::srv::AddFourInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab2_1_intefaces_custom::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab2_1_intefaces_custom::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab2_1_intefaces_custom::srv::AddFourInts_Response & msg)
{
  return lab2_1_intefaces_custom::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab2_1_intefaces_custom::srv::AddFourInts_Response>()
{
  return "lab2_1_intefaces_custom::srv::AddFourInts_Response";
}

template<>
inline const char * name<lab2_1_intefaces_custom::srv::AddFourInts_Response>()
{
  return "lab2_1_intefaces_custom/srv/AddFourInts_Response";
}

template<>
struct has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab2_1_intefaces_custom::srv::AddFourInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace lab2_1_intefaces_custom
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddFourInts_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddFourInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddFourInts_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_generator_traits
{

[[deprecated("use lab2_1_intefaces_custom::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab2_1_intefaces_custom::srv::AddFourInts_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab2_1_intefaces_custom::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab2_1_intefaces_custom::srv::to_yaml() instead")]]
inline std::string to_yaml(const lab2_1_intefaces_custom::srv::AddFourInts_Event & msg)
{
  return lab2_1_intefaces_custom::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lab2_1_intefaces_custom::srv::AddFourInts_Event>()
{
  return "lab2_1_intefaces_custom::srv::AddFourInts_Event";
}

template<>
inline const char * name<lab2_1_intefaces_custom::srv::AddFourInts_Event>()
{
  return "lab2_1_intefaces_custom/srv/AddFourInts_Event";
}

template<>
struct has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Event>
  : std::integral_constant<bool, has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Request>::value && has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<lab2_1_intefaces_custom::srv::AddFourInts_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab2_1_intefaces_custom::srv::AddFourInts>()
{
  return "lab2_1_intefaces_custom::srv::AddFourInts";
}

template<>
inline const char * name<lab2_1_intefaces_custom::srv::AddFourInts>()
{
  return "lab2_1_intefaces_custom/srv/AddFourInts";
}

template<>
struct has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts>
  : std::integral_constant<
    bool,
    has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts_Request>::value &&
    has_fixed_size<lab2_1_intefaces_custom::srv::AddFourInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts>
  : std::integral_constant<
    bool,
    has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Request>::value &&
    has_bounded_size<lab2_1_intefaces_custom::srv::AddFourInts_Response>::value
  >
{
};

template<>
struct is_service<lab2_1_intefaces_custom::srv::AddFourInts>
  : std::true_type
{
};

template<>
struct is_service_request<lab2_1_intefaces_custom::srv::AddFourInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lab2_1_intefaces_custom::srv::AddFourInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__TRAITS_HPP_
