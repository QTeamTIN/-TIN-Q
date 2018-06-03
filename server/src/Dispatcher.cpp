#include "Dispatcher.hpp"
#include <unordered_map>
#include <functional>
#include <vector>

//Dispatcher::Dispatcher(BlockingQueue &input_queue, BlockingQueue &output_queue, std::unique_ptr<ServerAPI> serverAPI)
//    :input_queue_(input_queue)
//    ,output_queue_(output_queue)
//	,serverAPI(std::move(serverAPI)) {}

Dispatcher::Dispatcher(BlockingQueue &input_queue, BlockingQueue &output_queue)
	: input_queue_(input_queue)
	, output_queue_(output_queue)
{
	serverAPI = std::make_unique<ServerAPI>();
}

void Dispatcher::run()
{
    while (!stopRequested()) {
        Packet pack = input_queue_.pop();
        processPacket(pack);
        // std::cout<<"\tReceived packet with code "<<pack.code()<<std::endl;
        // pack.set_code(pack.code()*2);
        // std::cout<<"\tcode * 2\n";
        // std::cout<<"\tSend packet with code "<<pack.code()<<std::endl<<std::endl;
        output_queue_.push(pack);
    }
}

void Dispatcher::processPacket(Packet packet)
{
	// wip map packettype -> method to process	
	/*static const std::unordered_map<Packet::SubtypeCase, std::function<void(Packet)> > processMethods = {
		{ Packet::SubtypeCase::kLogin, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kUserId, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kOperation, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kAck, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kQuery, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kResponse, [this](Packet packet) { this->processLogin(packet); } },
		{ Packet::SubtypeCase::kAlive, [this](Packet packet) { this->processLogin(packet); } }
	};*/

	/*auto specificMethod = processMethods.find(packet.subtype_case());
	if (specificMethod != processMethods.end())
		specificMethod->second(packet);*/
	switch (packet.subtype_case()) {
	case Packet::SubtypeCase::kLogin:
		processLogin(packet);
		break;
	case Packet::SubtypeCase::kUserId:
		processUserID(packet);
		break;
	case Packet::SubtypeCase::kOperation:
		processOperation(packet);
		break;
	case Packet::SubtypeCase::kAck:
		processAck(packet);
		break;
	case Packet::SubtypeCase::kQuery:
		processQuery(packet);
		break;
	case Packet::SubtypeCase::kResponse:
		processQueryResponse(packet);
		break;
	case Packet::SubtypeCase::kAlive:
		processAlive(packet);
		break;
	default:
		throw std::runtime_error("Undefined type of packet");
	}

}

void Dispatcher::processLogin(Packet packet)
{
	auto loginPacket = packet.login();
	std::string userName = loginPacket.name();
	int64_t hash = loginPacket.hash();
	// int32_t sessionID = serverAPI->loginUser(userName, hash);
	// TODO create UserID packet with session_id and send to user
	/*Packet userID;
	userID.set_session_id(sessionID);
	output_queue_.push(pack);*/
}

void Dispatcher::processChange(Packet packet)
{
}

void Dispatcher::processUserID(Packet packet)
{
	//could be unnecessary
}

void Dispatcher::processAck(Packet packet)
{
	//could be unnecessary
}

void Dispatcher::processOperation(Packet packet)
{
	auto operationPacket = packet.operation();
	int32_t session_id = operationPacket.session_id();
	int32_t operation_id = operationPacket.operation_id();
	int32_t local_id = operationPacket.local_id();
	std::vector<std::string> strArgs;
	for (int i = 0; i < operationPacket.str_args_size(); ++i)
		strArgs.push_back(operationPacket.str_args(i));
	std::vector<int> intArgs;
	for (int i = 0; i < operationPacket.int_args_size(); ++i)
		intArgs.push_back(operationPacket.int_args(i));
	//if not logged in send userid empty else call func

	bool ok = serverAPI->callFunction(operation_id, intArgs, strArgs);
	Packet ackResponse;
	auto ack = ackResponse.mutable_ack();
	ack->set_local_id(local_id);
	ack->set_if_success(ok);
	output_queue_.push(ackResponse);

}

void Dispatcher::processQuery(Packet packet)
{
	auto queryPacket = packet.query();
	int32_t session_id = queryPacket.session_id();
	int32_t operation_id = queryPacket.operation_id();
	int32_t local_id = queryPacket.local_id();
	std::vector<std::string> strArgs;
	for (int i = 0; i < queryPacket.str_args_size(); ++i)
		strArgs.push_back(queryPacket.str_args(i));
	std::vector<int> intArgs;
	for (int i = 0; i < queryPacket.int_args_size(); ++i)
		intArgs.push_back(queryPacket.int_args(i));
	// TODO send QueryResponse
}

void Dispatcher::processQueryResponse(Packet packet)
{
}

void Dispatcher::processAlive(Packet packet)
{
	auto alivePacket = packet.alive();
	int32_t session_id = alivePacket.session_id();
	// TODO send inf to server
}
