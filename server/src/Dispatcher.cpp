#include "Dispatcher.hpp"

Dispatcher::Dispatcher(std::queue<PACKET> &input_queue, std::queue<PACKET> &output_queue)
    :input_queue_(input_queue)
    ,output_queue_(output_queue)
{

}

void Dispatcher::run()
{

}
