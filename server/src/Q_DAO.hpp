#ifndef Q_DAO_H
#define Q_DAO_H
#include "UserTuple.hpp"
#include "QueueTuple.hpp"
class Q_DAO
{
public:

    virtual int saveUser(UserTuple) const =0;
    virtual UserTuple loadUser(int) const =0;
    virtual UserTuple loadUser(const std::string& name) const = 0;
    virtual void deleteUser(int) const = 0;
    virtual void updateUser(UserTuple) const = 0;
    
    virtual void saveQueue(QueueTuple) const = 0;
    virtual QueueTuple loadQueue(int, int) const = 0;
    virtual void deleteQueue(int, int) const = 0;
    virtual void updateQueue(QueueTuple) const = 0;
};

#endif // Q_DAO_H
