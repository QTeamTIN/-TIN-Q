#ifndef USERTUPLE_H
#define USERTUPLE_H
#include <pqxx/pqxx>
#include <iostream>
#include "User.hpp"

//This class represents database record
//Each user is saved in database tuple contains basic informations
class UserTuple
{
public:
    UserTuple();
    UserTuple(int user_id, std::string name, std::string password, std::string display_name);
    UserTuple(int user_id, std::string name, std::string password, std::string display_name, std::string mail);
    ~UserTuple();
    UserTuple& setDisplayName(const std::string& display_name);
    UserTuple& setMail(const std::string& mail);
    UserTuple& setName(const std::string& name);
    UserTuple& setPassword(const std::string& password);
    UserTuple& setUserId(int user_id);
    const std::string getDisplayName();
    const std::string getMail();
    const std::string getName();
    const std::string getPassword();
    const int getUserId();
    const bool isDisplayNameFilled() const {return displayNameFilled;}
    const bool isMailFilled() const {return mailFilled;}
    const bool isNameFilled() const {return nameFilled;}
    const bool isPasswordFilled() const {return passwordFilled;}
    const bool isUserIdFilled() const {return userIdFilled;}
    const void setMandatoryTrue();
    const void print();
    const User getUser();
private:

    int user_id;
    bool userIdFilled = false;
    std::string name;
    bool nameFilled = false;
    std::string password;
    bool passwordFilled = false;
    std::string display_name;
    bool displayNameFilled = false;
    std::string mail;
    bool mailFilled = false;

};


#endif