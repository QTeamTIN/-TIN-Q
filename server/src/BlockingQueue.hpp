#ifndef BLOCKINGQUEUE_HPP
#define BLOCKINGQUEUE_HPP

#include <mutex>
#include <condition_variable>
#include <queue>

#include "cppQ.pb.h"

using Packet = packet::PACKET;
class BlockingQueue
{
    static constexpr unsigned MAX_CAPACITY = 50;
public:
    BlockingQueue() : capacity_(MAX_CAPACITY) {};
    ~BlockingQueue() = default;

    Packet pop();
    void push(const Packet& packet);

private:
    std::mutex guard_;
    std::condition_variable full_;
    std::condition_variable empty_;
    std::queue<Packet> packet_queue_;
    unsigned capacity_;
};

#endif // BLOCKINGQUEUE_HPP
