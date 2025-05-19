// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab2_1_intefaces_custom:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/msg/sphere.hpp"


#ifndef LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab2_1_intefaces_custom/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab2_1_intefaces_custom
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::lab2_1_intefaces_custom::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::lab2_1_intefaces_custom::msg::Sphere radius(::lab2_1_intefaces_custom::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab2_1_intefaces_custom::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::lab2_1_intefaces_custom::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::lab2_1_intefaces_custom::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab2_1_intefaces_custom::msg::Sphere>()
{
  return lab2_1_intefaces_custom::msg::builder::Init_Sphere_center();
}

}  // namespace lab2_1_intefaces_custom

#endif  // LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__BUILDER_HPP_
