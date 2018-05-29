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
    Queue& setDescription(std::string description);
    Queue& setEndTime(std::string endTime);
    Queue& setName(std::string name);
    Queue& setPlace(std::string place);
    Queue& setQueueId(int queue_id);
    Queue& setStartTime(std::string startTime);
    Queue& setUserId(int user_id);
    int getDayOfWeek();
    std::string getDescription();
    std::string getEndTime();
    std::string getName();
    std::string getPlace();
    int getQueueId();
    std::string getStartTime();
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
