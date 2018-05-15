#ifndef STOPPABLE_H
#define STOPPABLE_H

#include <future>

class Stoppable
{
public:
    Stoppable();
    Stoppable(Stoppable && other);
    Stoppable& operator=(Stoppable && other);

    virtual void run() = 0;

    void operator()();

    bool stopRequested();

    void stop();

private:
    std::promise<void> exit_signal_;
    std::future<void> future_obj_;
};

#endif // STOPPABLE_H
