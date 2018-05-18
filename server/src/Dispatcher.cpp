#include "Dispatcher.hpp"

Dispatcher::Dispatcher(BlockingQueue &input_queue, BlockingQueue &output_queue)
    :input_queue_(input_queue)
    ,output_queue_(output_queue)
{

}

void Dispatcher::run()
{
    while (!stopRequested()) {
        PACKET pack = input_queue_.pop();
        std::cout<<"\tReceived packet with code "<<pack.code()<<std::endl;
        pack.set_code(pack.code()*2);
        std::cout<<"\tcode * 2\n";
        std::cout<<"\tSend packet with code "<<pack.code()<<std::endl<<std::endl;
        output_queue_.push(pack);
    }
}
