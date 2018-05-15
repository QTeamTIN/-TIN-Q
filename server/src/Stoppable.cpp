#include "Stoppable.h"

Stoppable::Stoppable()
    :future_obj_(exit_signal_.get_future())
{}

Stoppable::Stoppable(Stoppable &&other)
    :exit_signal_(std::move(other.exit_signal_))
    ,future_obj_(std::move(other.future_obj_))
{}

Stoppable &Stoppable::operator=(Stoppable &&other)
{
    exit_signal_ = std::move(other.exit_signal_);
    future_obj_ = std::move(other.future_obj_);
    return *this;
}

void Stoppable::operator()()
{
    run();
}

bool Stoppable::stopRequested()
{
    return future_obj_.wait_for(std::chrono::milliseconds(0))
            != std::future_status::timeout;
}

void Stoppable::stop()
{
    exit_signal_.set_value();
}

