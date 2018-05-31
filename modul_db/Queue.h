#ifndef QUEUE_H
#define QUEUE_H
#include <string>
#include <pqxx/pqxx>
#include <iostream>

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
    
    
    Queue& setDayOfWeekFilled(bool dayOfWeekFilled) {this->dayOfWeekFilled = dayOfWeekFilled; return *this;}
    Queue& setDescriptionFilled(bool descriptionFilled) {this->descriptionFilled = descriptionFilled; return *this;}
    Queue& setEndTimeFilled(bool endTimeFilled) {this->endTimeFilled = endTimeFilled; return *this;}
    Queue& setNameFilled(bool nameFilled) {this->nameFilled = nameFilled; return *this;}
    Queue& setPlaceFilled(bool placeFilled) {this->placeFilled = placeFilled; return *this;}
    Queue& setQueueIdFilled(bool queueIdFilled) {this->queueIdFilled = queueIdFilled; return *this;}
    Queue& setStartTimeFilled(bool startTimeFilled) {this->startTimeFilled = startTimeFilled; return *this;}
    Queue& setUserIdFilled(bool userIdFilled) {this->userIdFilled = userIdFilled; return *this;}
    bool isDayOfWeekFilled() const {return dayOfWeekFilled;}
    bool isDescriptionFilled() const {return descriptionFilled;}
    bool isEndTimeFilled() const {return endTimeFilled;}
    bool isNameFilled() const {return nameFilled;}
    bool isPlaceFilled() const {return placeFilled;}
    bool isQueueIdFilled() const {return queueIdFilled;}
    bool isStartTimeFilled() const {return startTimeFilled;}
    bool isUserIdFilled() const {return userIdFilled;}
    
    void setMandatoryTrue();
    void print();
    
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

#endif // QUEUE_H
