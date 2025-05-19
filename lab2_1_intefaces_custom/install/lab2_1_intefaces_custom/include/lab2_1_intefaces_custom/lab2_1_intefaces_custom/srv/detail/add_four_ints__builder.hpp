// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "lab2_1_intefaces_custom/srv/add_four_ints.hpp"


#ifndef LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_
#define LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace builder
{

class Init_AddFourInts_Request_d
{
public:
  explicit Init_AddFourInts_Request_d(::lab2_1_intefaces_custom::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  ::lab2_1_intefaces_custom::srv::AddFourInts_Request d(::lab2_1_intefaces_custom::srv::AddFourInts_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_c
{
public:
  explicit Init_AddFourInts_Request_c(::lab2_1_intefaces_custom::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddFourInts_Request_d c(::lab2_1_intefaces_custom::srv::AddFourInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_AddFourInts_Request_d(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_b
{
public:
  explicit Init_AddFourInts_Request_b(::lab2_1_intefaces_custom::srv::AddFourInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddFourInts_Request_c b(::lab2_1_intefaces_custom::srv::AddFourInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddFourInts_Request_c(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Request msg_;
};

class Init_AddFourInts_Request_a
{
public:
  Init_AddFourInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddFourInts_Request_b a(::lab2_1_intefaces_custom::srv::AddFourInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddFourInts_Request_b(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab2_1_intefaces_custom::srv::AddFourInts_Request>()
{
  return lab2_1_intefaces_custom::srv::builder::Init_AddFourInts_Request_a();
}

}  // namespace lab2_1_intefaces_custom


namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace builder
{

class Init_AddFourInts_Response_sum
{
public:
  Init_AddFourInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lab2_1_intefaces_custom::srv::AddFourInts_Response sum(::lab2_1_intefaces_custom::srv::AddFourInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab2_1_intefaces_custom::srv::AddFourInts_Response>()
{
  return lab2_1_intefaces_custom::srv::builder::Init_AddFourInts_Response_sum();
}

}  // namespace lab2_1_intefaces_custom


namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace builder
{

class Init_AddFourInts_Event_response
{
public:
  explicit Init_AddFourInts_Event_response(::lab2_1_intefaces_custom::srv::AddFourInts_Event & msg)
  : msg_(msg)
  {}
  ::lab2_1_intefaces_custom::srv::AddFourInts_Event response(::lab2_1_intefaces_custom::srv::AddFourInts_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Event msg_;
};

class Init_AddFourInts_Event_request
{
public:
  explicit Init_AddFourInts_Event_request(::lab2_1_intefaces_custom::srv::AddFourInts_Event & msg)
  : msg_(msg)
  {}
  Init_AddFourInts_Event_response request(::lab2_1_intefaces_custom::srv::AddFourInts_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddFourInts_Event_response(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Event msg_;
};

class Init_AddFourInts_Event_info
{
public:
  Init_AddFourInts_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddFourInts_Event_request info(::lab2_1_intefaces_custom::srv::AddFourInts_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddFourInts_Event_request(msg_);
  }

private:
  ::lab2_1_intefaces_custom::srv::AddFourInts_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab2_1_intefaces_custom::srv::AddFourInts_Event>()
{
  return lab2_1_intefaces_custom::srv::builder::Init_AddFourInts_Event_info();
}

}  // namespace lab2_1_intefaces_custom

#endif  // LAB2_1_INTEFACES_CUSTOM__SRV__DETAIL__ADD_FOUR_INTS__BUILDER_HPP_
