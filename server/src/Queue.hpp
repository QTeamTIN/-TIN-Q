#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <string>


class Queue
{
public:
    Queue();
    Queue(int userId, int queueId, std::string name
            , std::string place, std::string description
            , std::string startTime, std::string endTime
            , int dayOfWeek);
    ~Queue();
    Queue& setDayOfWeek(int dayOfWeek) {this->dayOfWeek = dayOfWeek; return *this;}
    Queue& setDescription(const std::string& description) {this->description = description; return *this;}
    Queue& setEndTime(const std::string& endTime) {this->endTime = endTime; return *this;}
    Queue& setName(const std::string& name) {this->name = name; return *this;}
    Queue& setPlace(const std::string& place) {this->place = place; return *this;}
    Queue& setQueueId(int queue_id) {this->queue_id = queue_id; return *this;}
    Queue& setStartTime(const std::string& startTime) {this->startTime = startTime; return *this;}
    Queue& setUserId(int user_id) {this->user_id = user_id; return *this;}
    int getDayOfWeek() const {return dayOfWeek;}
    const std::string& getDescription() const {return description;}
    const std::string& getEndTime() const {return endTime;}
    const std::string& getName() const {return name;}
    const std::string& getPlace() const {return place;}
    int getQueueId() const {return queue_id;}
    const std::string& getStartTime() const {return startTime;}
    int getUserId() const {return user_id;}

private:
    int user_id;
    int queue_id;
    std::string name;
    std::string place;
    std::string description;
    std::string startTime;
    std::string endTime;
    int dayOfWeek;
};

#endif // QUEUE_HPP