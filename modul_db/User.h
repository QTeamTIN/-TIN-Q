#ifndef USER_H
#define USER_H
#include <string>

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
    
    User& setIsDisplayNameSet(bool isDisplayNameSet) {this->isDisplayNameSet = isDisplayNameSet; return *this;}
    User& setIsMailSet(bool isMailSet) {this->isMailSet = isMailSet; return *this;}
    User& setIsNameSet(bool isNameSet) {this->isNameSet = isNameSet; return *this;}
    User& setIsPasswordSet(bool isPasswordSet) {this->isPasswordSet = isPasswordSet; return *this;}
    User& setIsUserIdSet(bool isUserIdSet) {this->isUserIdSet = isUserIdSet; return *this;}
    bool getIsDisplayNameSet() const {return isDisplayNameSet;}
    bool getIsMailSet() const {return isMailSet;}
    bool getIsNameSet() const {return isNameSet;}
    bool getIsPasswordSet() const {return isPasswordSet;}
    bool getIsUserIdSet() const {return isUserIdSet;}
    void setMandatoryTrue(); 
    
    private:
    int user_id;
    bool isUserIdSet = false;
    std::string name;
    bool isNameSet = false;
    std::string password;
    bool isPasswordSet = false;
    std::string display_name;
    bool isDisplayNameSet = false;
    std::string mail;
    bool isMailSet = false;

};

#endif // USER_H
