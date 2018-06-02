#ifndef Q_DAO_H
#define Q_DAO_H
#include "User.hpp"
#include "Queue.hpp"
class Q_DAO
{
public:

    virtual void saveUser(User)=0;
    virtual User loadUser(int)=0;
    virtual void deleteUser(int)=0;
    virtual void updateUser(User)=0;
    
    virtual void saveQueue(Queue)=0;
    virtual Queue loadQueue(int, int)=0;
    virtual void deleteQueue(int, int)=0;
    virtual void updateQueue(Queue)=0;
};

#endif // Q_DAO_H
