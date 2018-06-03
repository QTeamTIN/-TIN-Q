#include "QueueTuple.hpp"
QueueTuple::QueueTuple(){
    
}

QueueTuple::QueueTuple(int userId, int queueId, std::string name
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
QueueTuple::~QueueTuple(){
    
}

QueueTuple& QueueTuple::setDayOfWeek(int dayOfWeek) {
    this->dayOfWeek = dayOfWeek;
    dayOfWeekFilled = true;
    return *this;
}
QueueTuple& QueueTuple::setDescription(const std::string& description) {
    this->description = description; 
    descriptionFilled = true;
    return *this;
}
QueueTuple& QueueTuple::setEndTime(const std::string& endTime) {
    this->endTime = endTime; 
    endTimeFilled = true;
    return *this;
}
QueueTuple& QueueTuple::setName(const std::string& name) {
    this->name = name;
    nameFilled = true; 
    return *this;
}
QueueTuple& QueueTuple::setPlace(const std::string& place) {
    this->place = place;
    placeFilled = true;  
    return *this;
}
QueueTuple& QueueTuple::setQueueId(int queue_id) {
    this->queue_id = queue_id; 
    queueIdFilled = true;  
    return *this;
}
QueueTuple& QueueTuple::setStartTime(const std::string& startTime) {
    this->startTime = startTime; 
    startTimeFilled = true;  
    return *this;
}
QueueTuple& QueueTuple::setUserId(int user_id) {
    this->user_id = user_id;
    userIdFilled = true;   
    return *this;
}
const int QueueTuple::getDayOfWeek() {
    return dayOfWeek;
}
const std::string QueueTuple::getDescription() {
    return description;
}
const std::string QueueTuple::getEndTime() {
    return endTime;
}
const std::string QueueTuple::getName() {
    return name;
}
const std::string QueueTuple::getPlace() {
    return place;
}
const int QueueTuple::getQueueId() {
    return queue_id;
}
const std::string QueueTuple::getStartTime() {
    return startTime;
}
const int QueueTuple::getUserId() {
    return user_id;
}
const void QueueTuple::setMandatoryTrue() {
    userIdFilled = true;
    queueIdFilled = true;
    nameFilled = true;
    placeFilled = true;
}
const void QueueTuple::print() {
    std::stringstream printString;
    printString << getUserId() << 
                ", " <<  getQueueId() << 
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

const Queue QueueTuple::getQueue() {
    Queue queue(getUserId(), getQueueId(), getName(), getPlace(), getDescription()
            , getStartTime(), getEndTime(), getDayOfWeek());
    return queue;
}