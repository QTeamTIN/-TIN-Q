#include "Thrower.hpp"

Thrower::Thrower()
    :exception_future_(exception_handler_.get_future())
{}

Thrower::Thrower(Thrower &&other)
    :exception_handler_(std::move(other.exception_handler_))
    ,exception_future_(std::move(other.exception_future_))
{}

Thrower& Thrower::operator=(Thrower &&other)
{
    exception_handler_ = std::move(other.exception_handler_);
    exception_future_ = std::move(other.exception_future_);
}

void Thrower::handle()
{
    if (exception_future_.wait_for(std::chrono::milliseconds(0))
            == std::future_status::ready)
        exception_future_.get();
}

void Thrower::setException(const std::exception &exception)
{
    exception_handler_.set_exception(std::make_exception_ptr(exception));
}
