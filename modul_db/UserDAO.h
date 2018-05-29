#ifndef USERDAO_H
#define USERDAO_H
#include "User.h"

//Interface that implements functions needed 
//to manage users
class UserDAO
{
public:
    virtual void saveUser(User){};
    //warning - how to return null?
    virtual User loadUser(int){};
};

#endif // USERDAO_H
