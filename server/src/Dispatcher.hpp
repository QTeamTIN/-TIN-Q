#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include <queue>

#include "Stoppable.hpp"
#include "cppQ.pb.h"

using namespace packet;

class Dispatcher: public Stoppable
{
public:
    Dispatcher(std::queue<PACKET>& input_queue, std::queue<PACKET>& output_queue);

    void run() override;

private:
    std::queue<PACKET>& input_queue_;
    std::queue<PACKET>& output_queue_;
};

#endif // DISPATCHER_HPP
