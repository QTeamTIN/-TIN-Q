#include "Queue.hpp"

Queue::Queue()
{
}

Queue::Queue(int userId, int queueId, std::string name
            , std::string place, std::string description
            , std::string startTime, std::string endTime
            , int dayOfWeek){
    setUserId(user_id);
    setQueueId(queue_id);
    setName(name);
    setPlace(place);
    setDescription(description);
    setStartTime(startTime);
    setEndTime(endTime);
    setDayOfWeek(dayOfWeek);
}

Queue::~Queue()
{
}


Queue::QueryResponse Queue::getQueueParams() const
{
	std::list<int> int_args;
	std::list<std::string> str_args;
	int_args.push_back(user_id);
    int_args.push_back(queue_id);
	str_args.push_back(name);
	str_args.push_back(place);
	str_args.push_back(description);
    str_args.push_back(startTime);
    str_args.push_back(endTime);
    int_args.push_back(dayOfWeek);
       
    
	return std::make_tuple(int_args,str_args);
}