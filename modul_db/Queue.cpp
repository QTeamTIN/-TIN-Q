#include "Queue.h"
Queue::Queue(){
    
}

Queue::~Queue(){
    
}
Queue& Queue::setDayOfWeek(int dayOfWeek) {
    this->dayOfWeek = dayOfWeek;
    return *this;
}
Queue& Queue::setDescription(const std::string& description) {
    this->description = description; 
    return *this;
}
Queue& Queue::setEndTime(const std::string& endTime) {
    this->endTime = endTime; 
    return *this;
}
Queue& Queue::setName(const std::string& name) {
    this->name = name; 
    return *this;
}
Queue& Queue::setPlace(const std::string& place) {
    this->place = place; 
    return *this;
}
Queue& Queue::setQueueId(int queue_id) {
    this->queue_id = queue_id; 
    return *this;
}
Queue& Queue::setStartTime(const std::string& startTime) {
    this->startTime = startTime; 
    return *this;
}
Queue& Queue::setUserId(int user_id) {
    this->user_id = user_id; 
    return *this;
}
int Queue::getDayOfWeek() {
    return dayOfWeek;
}
const std::string Queue::getDescription() {
    return description;
}
const std::string Queue::getEndTime() {
    return endTime;
}
const std::string Queue::getName() {
    return name;
}
const std::string Queue::getPlace() {
    return place;
}
int Queue::getQueueId() {
    return queue_id;
}
const std::string Queue::getStartTime() {
    return startTime;
}
int Queue::getUserId() {
    return user_id;
}