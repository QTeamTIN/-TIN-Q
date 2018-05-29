#ifndef STOPPABLE_H
#define STOPPABLE_H

#include <future>
#include <memory>

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
    void join();

private:
    std::promise<void> exit_signal_;
    std::future<void> future_obj_;

    std::unique_ptr<std::thread> thread_;
};

#endif // STOPPABLE_H
