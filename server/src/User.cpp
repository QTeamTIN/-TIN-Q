#include "User.hpp"

User::User()
{
}

User::~User()
{
}


User::User(int user_id, std::string name, std::string display_name){
    setUserId(user_id);
    setName(name);
    setDisplayName(display_name);
}

User::User(int user_id, std::string name, std::string display_name, std::string mail){
    setUserId(user_id);
    setName(name);
    setDisplayName(display_name);
    setMail(mail);
}