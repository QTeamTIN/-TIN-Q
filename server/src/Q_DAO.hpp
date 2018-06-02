#ifndef Q_DAO_H
#define Q_DAO_H
#include "User.hpp"
#include "Queue.hpp"
class Q_DAO
{
public:

    virtual void saveUser(User) const =0;
    virtual User loadUser(int) const =0;
    virtual User loadUser(const std::string& name) const = 0;
    virtual void deleteUser(int) const = 0;
    virtual void updateUser(User) const = 0;
    
    virtual void saveQueue(Queue) const = 0;
    virtual Queue loadQueue(int, int) const = 0;
    virtual void deleteQueue(int, int) const = 0;
    virtual void updateQueue(Queue) const = 0;
};

#endif // Q_DAO_H
