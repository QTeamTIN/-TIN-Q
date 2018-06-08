#include "UserTuple.hpp"
#include <string>
UserTuple::UserTuple(){
    
}

UserTuple::UserTuple(int userId, std::string name, std::string password, std::string display_name){
    setName(name);
    setPassword(password);
    setDisplayName(display_name);
}

UserTuple::UserTuple(int userId, std::string name, std::string password, std::string display_name, std::string mail){
    setName(name);
    setPassword(password);
    setDisplayName(display_name);
    setMail(mail);
}

UserTuple::~UserTuple(){
    
}

UserTuple& UserTuple::setDisplayName(const std::string& display_name) {
    this->display_name = display_name;
    displayNameFilled = true;
    return *this;
}

UserTuple& UserTuple::setMail(const std::string& mail) {
    this->mail = mail; 
    mailFilled = true;
    return *this;
}

UserTuple& UserTuple::setName(const std::string& name) {
    this->name = name; 
    nameFilled = true;
    return *this;
}

UserTuple& UserTuple::setPassword(const std::string& password) {
    this->password = password; 
    passwordFilled = true;
    return *this;
}
    

UserTuple& UserTuple::setUserId(int user_id) {
    this->user_id = user_id; 
    userIdFilled = true;
    return *this;
}

std::string UserTuple::getDisplayName() const{
    return display_name;
}

std::string UserTuple::getMail() const{
    return mail;
}

std::string UserTuple::getName() const{
    return name;
}

std::string UserTuple::getPassword() const{
    return password;
}

int UserTuple::getUserId() const{
    return user_id;
}

void UserTuple::setMandatoryTrue(){
    nameFilled = true;
    displayNameFilled = true;
    passwordFilled = true;
}

void UserTuple::print() const {
    std::stringstream printString;
    printString << getName()<< "'" <<
                ", '" << getPassword()<< "'" <<
                ", '" << getDisplayName()<< "'";
    if(isMailFilled()) {
        printString << ", '" << getMail() << "'";
    }
    if(isUserIdFilled()) {
        printString << ", " << getUserId();
    }
    std::cout << printString.str() << std::endl;
}

User UserTuple::getUser() const{
    User user(getUserId(), getName(), getDisplayName(), getMail());
    return user;
}