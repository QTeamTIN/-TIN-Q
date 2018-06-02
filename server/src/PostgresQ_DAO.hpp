#ifndef POSTREGSQ_DAO_H
#define POSTREGSQ_DAO_H
#include "Q_DAO.hpp"
#include "Connection.hpp"

class PostgresQ_DAO : public Q_DAO
{
public:
    PostgresQ_DAO();
    ~PostgresQ_DAO();
    void saveUser(User);
    User loadUser(int);
    void deleteUser(int);
    void updateUser(User);

    void saveQueue(Queue);
    Queue loadQueue(int userId, int queueId);
    void deleteQueue(int, int);
    void updateQueue(Queue);    
};

#endif // POSTREGSQ_DAO_H
