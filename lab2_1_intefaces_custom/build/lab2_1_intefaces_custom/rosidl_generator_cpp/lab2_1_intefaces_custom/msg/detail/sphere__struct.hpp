// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab2_1_intefaces_custom:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/msg/sphere.hpp"


#ifndef LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_HPP_
#define LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lab2_1_intefaces_custom__msg__Sphere __attribute__((deprecated))
#else
# define DEPRECATED__lab2_1_intefaces_custom__msg__Sphere __declspec(deprecated)
#endif

namespace lab2_1_intefaces_custom
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sphere_
{
  using Type = Sphere_<ContainerAllocator>;

  explicit Sphere_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
    }
  }

  explicit Sphere_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
    }
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _radius_type =
    double;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab2_1_intefaces_custom__msg__Sphere
    std::shared_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab2_1_intefaces_custom__msg__Sphere
    std::shared_ptr<lab2_1_intefaces_custom::msg::Sphere_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sphere_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sphere_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sphere_

// alias to use template instance with default allocator
using Sphere =
  lab2_1_intefaces_custom::msg::Sphere_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lab2_1_intefaces_custom

#endif  // LAB2_1_INTEFACES_CUSTOM__MSG__DETAIL__SPHERE__STRUCT_HPP_
