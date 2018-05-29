#ifndef POSTGRESQUEUEDAO_H
#define POSTGRESQUEUEDAO_H
#include "QueueDAO.h"

//Class with UserDAO interface
//Uses connection to Postgresql 9.6 
//and implements basic functions
class PostgresQueueDAO : public QueueDAO
{
public:
    PostgresQueueDAO();
    ~PostgresQueueDAO();
   
    void saveQueue(Queue);
    Queue loadQueue(int userId, int queueId);
};

#endif // POSTGRESQUEUEDAO_H
