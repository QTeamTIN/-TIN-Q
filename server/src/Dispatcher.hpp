#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include <queue>

#include "BlockingQueue.hpp"
#include "Stoppable.hpp"
#include "ServerAPI.hpp"
#include "cppQ.pb.h"

#include <memory>

//using namespace packet;
using Packet = packet::BasePacket;

class Dispatcher: public Stoppable
{
public:
	Dispatcher() = delete;
	Dispatcher(BlockingQueue& input_queue, BlockingQueue& output_queue, ServerAPI& server_api);
	~Dispatcher() = default;
    void run() override;

	void processPacket(Packet packet);

private:

	void processLogin(Packet packet);
	void processChange(Packet packet);
	void processUserID(Packet packet);
	void processAck(Packet packet);
	void processOperation(Packet packet);
	void processQuery(Packet packet);
	void processQueryResponse(Packet packet);
	void processAlive(Packet packet);

    BlockingQueue& input_queue_;
    BlockingQueue& output_queue_;
	ServerAPI& serverAPI;

};

#endif // DISPATCHER_HPP
