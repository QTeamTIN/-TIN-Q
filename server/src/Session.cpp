#include "Session.hpp"

Session::Session()
{
    update();
}

Session::Session(std::shared_ptr<User> user)
    :user_(user)
{
    update();
}

void Session::setUser(std::shared_ptr<User> user)
{
    user_ = user;
}

std::shared_ptr<User> Session::getUser() const
{
    return user_;
}

void Session::update()
{
    last_activity_ = std::time(0);
}

time_t Session::getLastActivity() const
{
    return last_activity_;
}

