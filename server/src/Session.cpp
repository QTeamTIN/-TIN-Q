#include "Session.hpp"

Session::Session()
{
    update();
}

void Session::setUser(std::shared_ptr<User> user)
{
    user_ = user;
}

void Session::update()
{
    last_activity_ = std::time(0);
}

time_t Session::getLastActivity() const
{
    return last_activity_;
}

