#include "BlockingQueue.hpp"


Packet BlockingQueue::pop()
{
    std::unique_lock<std::mutex> cond_lock(guard_);
    if(empty())
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
    if(size() >= capacity_)
    {
        full_.wait(cond_lock);
    }
    packet_queue_.push(packet);
    empty_.notify_one();
}

bool BlockingQueue::empty()
{
	std::lock_guard<std::mutex> guard(guard_);
	return packet_queue_.empty();
}

std::size_t BlockingQueue::size()
{
	std::lock_guard<std::mutex> guard(guard_);
	return packet_queue_.size();
}

void BlockingQueue::terminate()
{
	// notify threads blocked on both cond_variables and close queue
	//full_.notify_all();
	//empty_.notify_all();
}
