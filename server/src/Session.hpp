#ifndef SESSION_HPP
#define SESSION_HPP

#include <memory>
#include <ctime>

#include "User.hpp"

class Session
{
public:
    Session();

    void setUser(std::shared_ptr<User> user);

    void update();
    std::time_t getLastActivity() const;

private:
    std::shared_ptr<User> user_;
    std::time_t last_activity_;
};

#endif // SESSION_HPP
