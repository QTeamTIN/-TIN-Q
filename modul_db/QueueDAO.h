#ifndef QUEUEDAO_H
#define QUEUEDAO_H
#include "Queue.h"

//Interface that implements functions needed 
//to manage queues
class QueueDAO
{
public:
    virtual void saveQueue(Queue){};
    virtual Queue loadQueue(int userId, int queueId){};
};

#endif // QUEUEDAO_H
