#include "User.h"
User::User(){
    
}

User::~User(){
    
}

User& User::setDisplayName(std::string display_name) {
    this->display_name = display_name;
    return *this;
}

User& User::setMail(std::string mail) {
    this->mail = mail; 
    return *this;
}

User& User::setName(std::string name) {
    this->name = name; 
    return *this;
}

User& User::setPassword(std::string password) {
    this->password = password; 
    return *this;
}
    

User& User::setUserId(int user_id) {
    this->user_id = user_id; 
    return *this;
}

std::string User::getDisplayName() {
    return display_name;
}

std::string User::getMail() {
    return mail;
}

std::string User::getName() {
    return name;
}

std::string User::getPassword() {
    return password;
}

int User::getUserId() {
    return user_id;
}