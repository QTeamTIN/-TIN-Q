#include "BlockingQueue.hpp"

Packet BlockingQueue::pop()
{
    std::unique_lock<std::mutex> cond_lock(guard_);
    if(packet_queue_.empty())
    {
        empty_.wait(cond_lock);
    }

    auto packet = packet_queue_.front();
    packet_queue_.pop();
    full_.notify_one();
    return packet;
}

void BlockingQueue::push(const Packet& packet)
{
    std::unique_lock<std::mutex> cond_lock(guard_);
    if(packet_queue_.size() >= capacity_)
    {
        full_.wait(cond_lock);
    }
    packet_queue_.push(packet);
    empty_.notify_one();
}
