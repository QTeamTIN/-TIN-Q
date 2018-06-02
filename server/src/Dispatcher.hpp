#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include <queue>

#include "BlockingQueue.hpp"
#include "Stoppable.hpp"
#include "cppQ.pb.h"

//using namespace packet;
using Packet = packet::BasePacket;

class Dispatcher: public Stoppable
{
public:
    Dispatcher(BlockingQueue& input_queue, BlockingQueue& output_queue);

    void run() override;

	void processPacket(Packet packet);
	void processLogin(Packet packet);
	void processChange(Packet packet);
	void processUserID(Packet packet);
	void processAck(Packet packet);
	void processOperation(Packet packet);
	void processQuery(Packet packet);
	void processQueryResponse(Packet packet);
	void processAlive(Packet packet);


private:
    BlockingQueue& input_queue_;
    BlockingQueue& output_queue_;
};

#endif // DISPATCHER_HPP
