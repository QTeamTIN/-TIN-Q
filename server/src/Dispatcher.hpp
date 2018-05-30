#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include <queue>

#include "BlockingQueue.hpp"
#include "Stoppable.hpp"
#include "cppQ.pb.h"

using namespace packet;

class Dispatcher: public Stoppable
{
public:
    Dispatcher(BlockingQueue& input_queue, BlockingQueue& output_queue);

    void run() override;

	void processPacket(PACKET packet);
	void processLogin(PACKET packet);
	void processChange(PACKET packet);
	void processUserID(PACKET packet);
	void processAck(PACKET packet);
	void processOperation(PACKET packet);
	void processQuery(PACKET packet);
	void processQueryResponse(PACKET packet):
	void processAlive(PACKET packet);


private:
    BlockingQueue& input_queue_;
    BlockingQueue& output_queue_;
};

#endif // DISPATCHER_HPP
