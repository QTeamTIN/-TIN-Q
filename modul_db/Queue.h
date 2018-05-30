#ifndef QUEUE_H
#define QUEUE_H
#include <string>
//This class represents data base record
//Queue created by user
class Queue
{
public:
    Queue();
    ~Queue();
    Queue& setDayOfWeek(int dayOfWeek);
    Queue& setDescription(const std::string& description);
    Queue& setEndTime(const std::string& endTime);
    Queue& setName(const std::string& name);
    Queue& setPlace(const std::string& place);
    Queue& setQueueId(int queue_id);
    Queue& setStartTime(const std::string& startTime);
    Queue& setUserId(int user_id);
    int getDayOfWeek();
    const std::string getDescription();
    const std::string getEndTime();
    const std::string getName();
    const std::string getPlace();
    int getQueueId();
    const std::string getStartTime();
    int getUserId();
private:
    int user_id;
    int queue_id;
    std::string name;
    std::string place;
    std::string description;
    //hh:mm:ss
    std::string startTime;
    std::string endTime;
    int dayOfWeek;
};

#endif // QUEUE_H
