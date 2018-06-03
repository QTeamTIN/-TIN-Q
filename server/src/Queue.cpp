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
