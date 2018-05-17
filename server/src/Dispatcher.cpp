#include "Dispatcher.hpp"

Dispatcher::Dispatcher(std::queue<PACKET> &input_queue, std::queue<PACKET> &output_queue)
    :input_queue_(input_queue)
    ,output_queue_(output_queue)
{

}

void Dispatcher::run()
{
    while (!stopRequested()) {
        if (input_queue_.empty())
            continue;
        PACKET pack = input_queue_.front();
        std::cout<<"\tReceived packet with code "<<pack.code()<<std::endl;
        input_queue_.pop();
        pack.set_code(pack.code()*2);
        std::cout<<"\tcode * 2\n";
        std::cout<<"\tSend packet with code "<<pack.code()<<std::endl<<std::endl;
        output_queue_.push(pack);
    }
}
