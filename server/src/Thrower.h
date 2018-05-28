#ifndef THROWER_H
#define THROWER_H

#include <future>

class Thrower
{
public:
    Thrower();
    Thrower(Thrower && other) = delete;
    Thrower& operator=(Thrower && other) = delete;

    void handle() throw(...);

protected:
    void setException(const std::exception& exception);

private:
    std::promise<void> exception_handler_;
    std::future<void> exception_future_;
};

#endif // THROWER_H
