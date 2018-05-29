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
    User& setDisplayName(std::string display_name);
    User& setMail(std::string mail);
    User& setName(std::string name);
    User& setPassword(std::string password);
    User& setUserId(int user_id);
    std::string getDisplayName();
    std::string getMail();
    std::string getName();
    std::string getPassword();
    int getUserId();

private:
    int user_id;
    std::string name;
    std::string password;
    std::string display_name;
    std::string mail;

};

#endif // USER_H
