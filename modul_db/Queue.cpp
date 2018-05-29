#include "Queue.h"
Queue::Queue(){
    
}

Queue::~Queue(){
    
}
Queue& Queue::setDayOfWeek(int dayOfWeek) {
    this->dayOfWeek = dayOfWeek;
    return *this;
}
Queue& Queue::setDescription(std::string description) {
    this->description = description; 
    return *this;
}
Queue& Queue::setEndTime(std::string endTime) {
    this->endTime = endTime; 
    return *this;
}
Queue& Queue::setName(std::string name) {
    this->name = name; 
    return *this;
}
Queue& Queue::setPlace(std::string place) {
    this->place = place; 
    return *this;
}
Queue& Queue::setQueueId(int queue_id) {
    this->queue_id = queue_id; 
    return *this;
}
Queue& Queue::setStartTime(std::string startTime) {
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
std::string Queue::getDescription() {
    return description;
}
std::string Queue::getEndTime() {
    return endTime;
}
std::string Queue::getName() {
    return name;
}
std::string Queue::getPlace() {
    return place;
}
int Queue::getQueueId() {
    return queue_id;
}
std::string Queue::getStartTime() {
    return startTime;
}
int Queue::getUserId() {
    return user_id;
}