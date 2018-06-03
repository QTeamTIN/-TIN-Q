#include "UserTuple.hpp"
#include <string>
UserTuple::UserTuple(){
    
}

UserTuple::UserTuple(int user_id, std::string name, std::string password, std::string display_name){
    setUserId(user_id);
    setName(name);
    setPassword(password);
    setDisplayName(display_name);
}

UserTuple::UserTuple(int user_id, std::string name, std::string password, std::string display_name, std::string mail){
    setUserId(user_id);
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

const std::string UserTuple::getDisplayName() {
    return display_name;
}

const std::string UserTuple::getMail() {
    return mail;
}

const std::string UserTuple::getName() {
    return name;
}

const std::string UserTuple::getPassword() {
    return password;
}

const int UserTuple::getUserId() {
    return user_id;
}

const void UserTuple::setMandatoryTrue(){
    nameFilled = true;
    displayNameFilled = true;
    passwordFilled = true;
    userIdFilled = true;

}

const void UserTuple::print() {
    std::stringstream printString;
    printString << getUserId() << 
                ", '" << getName()<< "'" <<
                ", '" << getPassword()<< "'" <<
                ", '" << getDisplayName()<< "'";
    if(isMailFilled()) {
        printString << ", '" << getMail() << "'";
    }
    std::cout << printString.str() << std::endl;
}

const User UserTuple::getUser() {
    User user(getUserId(), getName(), getDisplayName(), getMail());
    return user;
}