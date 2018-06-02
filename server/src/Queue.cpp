#include "Queue.hpp"
Queue::Queue(){
    
}

Queue::~Queue(){
    
}
Queue& Queue::setDayOfWeek(int dayOfWeek) {
    this->dayOfWeek = dayOfWeek;
    setDayOfWeekFilled(true);
    return *this;
}
Queue& Queue::setDescription(const std::string& description) {
    this->description = description; 
    setDescriptionFilled(true);
    return *this;
}
Queue& Queue::setEndTime(const std::string& endTime) {
    this->endTime = endTime; 
    setEndTimeFilled(true);
    return *this;
}
Queue& Queue::setName(const std::string& name) {
    this->name = name;
    setNameFilled(true); 
    return *this;
}
Queue& Queue::setPlace(const std::string& place) {
    this->place = place;
    setPlaceFilled(true);  
    return *this;
}
Queue& Queue::setQueueId(int queue_id) {
    this->queue_id = queue_id; 
    setQueueIdFilled(true);  
    return *this;
}
Queue& Queue::setStartTime(const std::string& startTime) {
    this->startTime = startTime; 
    setStartTimeFilled(true);  
    return *this;
}
Queue& Queue::setUserId(int user_id) {
    this->user_id = user_id;
    setUserIdFilled(true);   
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
void Queue::setMandatoryTrue() {
    setUserIdFilled(true);
    setQueueIdFilled(true);
    setNameFilled(true);
    setPlaceFilled(true);
}
void Queue::print() {
    std::stringstream printString;
    printString << getUserId() << 
                   getQueueId() << 
                ", '" << getName()<< "'" <<
                ", '" << getPlace()<< "'";
    if(isDescriptionFilled()) {
        printString << ", '" << getDescription() << "'";
    }
    if(isStartTimeFilled()) {
        printString << ", '" << getStartTime() << "'";
    }
    if(isEndTimeFilled()) {
        printString << ", '" << getEndTime() << "'";
    }
    if(isDayOfWeekFilled()) {
        printString << ", '" << getDayOfWeek() << "'";
    }
    
    std::cout << printString.str() << std::endl;
}
