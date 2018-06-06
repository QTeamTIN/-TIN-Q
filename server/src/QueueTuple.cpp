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
int QueueTuple::getDayOfWeek() const{
    return dayOfWeek;
}
std::string QueueTuple::getDescription() const{
    return description;
}
std::string QueueTuple::getEndTime() const{
    return endTime;
}
std::string QueueTuple::getName() const{
    return name;
}
std::string QueueTuple::getPlace() const{
    return place;
}
int QueueTuple::getQueueId() const{
    return queue_id;
}
std::string QueueTuple::getStartTime() const{
    return startTime;
}
int QueueTuple::getUserId() const{
    return user_id;
}
void QueueTuple::setMandatoryTrue(){
    userIdFilled = true;
    queueIdFilled = true;
    nameFilled = true;
    placeFilled = true;
}
void QueueTuple::print() const{
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

Queue QueueTuple::getQueue() const{
    Queue queue(getUserId(), getQueueId(), getName(), getPlace(), getDescription()
            , getStartTime(), getEndTime(), getDayOfWeek());
    return queue;
}