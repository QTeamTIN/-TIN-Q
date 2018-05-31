#include "User.h"
#include <string>
User::User(){
    
}

User::~User(){
    
}

User& User::setDisplayName(const std::string& display_name) {
    this->display_name = display_name;
    displayNameFilled = true;
    return *this;
}

User& User::setMail(const std::string& mail) {
    this->mail = mail; 
    mailFilled = true;
    return *this;
}

User& User::setName(const std::string& name) {
    this->name = name; 
    nameFilled = true;
    return *this;
}

User& User::setPassword(const std::string& password) {
    this->password = password; 
    passwordFilled = true;
    return *this;
}
    

User& User::setUserId(int user_id) {
    this->user_id = user_id; 
    userIdFilled = true;
    return *this;
}

const std::string User::getDisplayName() {
    return display_name;
}

const std::string User::getMail() {
    return mail;
}

const std::string User::getName() {
    return name;
}

const std::string User::getPassword() {
    return password;
}

int User::getUserId() {
    return user_id;
}

void User::setMandatoryTrue(){
    setNameFilled(true);
    setDisplayNameFilled(true);
    setPasswordFilled(true);
    setUserIdFilled(true);
}

void User::print() {
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