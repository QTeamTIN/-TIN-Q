#ifndef USER_H
#define USER_H

#include <pqxx/pqxx>
#include <iostream>


//This class represents database record
//Each user is saved in database tuple contains basic informations
class User
{
public:
    User();
    ~User();
    User& setDisplayName(const std::string& display_name);
    User& setMail(const std::string& mail);
    User& setName(const std::string& name);
    User& setPassword(const std::string& password);
    User& setUserId(int user_id);
    const std::string getDisplayName();
    const std::string getMail();
    const std::string getName();
    const std::string getPassword();
    int getUserId();
    
    User& setDisplayNameFilled(bool displayNameFilled) {this->displayNameFilled = displayNameFilled; return *this;}
    User& setMailFilled(bool mailFilled) {this->mailFilled = mailFilled; return *this;}
    User& setNameFilled(bool nameFilled) {this->nameFilled = nameFilled; return *this;}
    User& setPasswordFilled(bool passwordFilled) {this->passwordFilled = passwordFilled; return *this;}
    User& setUserIdFilled(bool userIdFilled) {this->userIdFilled = userIdFilled; return *this;}
    bool isDisplayNameFilled() const {return displayNameFilled;}
    bool isMailFilled() const {return mailFilled;}
    bool isNameFilled() const {return nameFilled;}
    bool isPasswordFilled() const {return passwordFilled;}
    bool isUserIdFilled() const {return userIdFilled;}
    
    void setMandatoryTrue();
    void print();
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

#endif // USER_H
