#ifndef QUEUETUPLE_H
#define QUEUETUPLE_H
#include <string>
#include <pqxx/pqxx>
#include <iostream>
#include "Queue.hpp"

//This class represents data base record
//Queue created by user
class QueueTuple
{
public:
    QueueTuple();
    QueueTuple(int userId, int queueId, std::string name
            , std::string place, std::string description
            , std::string startTime, std::string endTime
            , int dayOfWeek);
    ~QueueTuple();
    QueueTuple& setDayOfWeek(int dayOfWeek);
    QueueTuple& setDescription(const std::string& description);
    QueueTuple& setEndTime(const std::string& endTime);
    QueueTuple& setName(const std::string& name);
    QueueTuple& setPlace(const std::string& place);
    QueueTuple& setQueueId(int queue_id);
    QueueTuple& setStartTime(const std::string& startTime);
    QueueTuple& setUserId(int user_id);
    int getDayOfWeek()const;
     std::string getDescription()const;
    std::string getEndTime()const;
    std::string getName()const;
    std::string getPlace()const;
    int getQueueId()const;
    std::string getStartTime()const;
    int getUserId()const;
    
    bool isDayOfWeekFilled() const {return dayOfWeekFilled;}
    bool isDescriptionFilled() const {return descriptionFilled;}
    bool isEndTimeFilled() const {return endTimeFilled;}
    bool isNameFilled() const {return nameFilled;}
    bool isPlaceFilled() const {return placeFilled;}
    bool isQueueIdFilled() const {return queueIdFilled;}
    bool isStartTimeFilled() const {return startTimeFilled;}
    bool isUserIdFilled() const {return userIdFilled;}
    
    void setMandatoryTrue();
    void print()const;
    Queue getQueue()const;
    
private:
    int user_id;
    bool userIdFilled = false;
    int queue_id;
    bool queueIdFilled = false;
    std::string name;
    bool nameFilled = false;
    std::string place;
    bool placeFilled = false;
    std::string description;
    bool descriptionFilled = false;
    //hh:mm:ss
    std::string startTime;
    bool startTimeFilled = false;
    std::string endTime;
    bool endTimeFilled = false;
    int dayOfWeek;
    bool dayOfWeekFilled = false;

};

#endif // UserTuple.hpp