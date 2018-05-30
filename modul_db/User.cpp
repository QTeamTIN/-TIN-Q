#include "User.h"
User::User(){
    
}

User::~User(){
    
}

User& User::setDisplayName(const std::string& display_name) {
    this->display_name = display_name;
    isDisplayNameSet = true;
    return *this;
}

User& User::setMail(const std::string& mail) {
    this->mail = mail; 
    isMailSet = true;
    return *this;
}

User& User::setName(const std::string& name) {
    this->name = name; 
    isNameSet = true;
    return *this;
}

User& User::setPassword(const std::string& password) {
    this->password = password; 
    isPasswordSet = true;
    return *this;
}
    

User& User::setUserId(int user_id) {
    this->user_id = user_id; 
    isUserIdSet = true;
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
    setIsNameSet(true);
    setIsDisplayNameSet(true);
    setIsPasswordSet(true);
    setIsUserIdSet(true);
}