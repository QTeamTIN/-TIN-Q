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
    User loadUser(const std::string& username);
    void deleteUser(int);
    void updateUser(User);

    void saveQueue(Queue);
    Queue loadQueue(int userId, int queueId);
    void deleteQueue(int, int);
    void updateQueue(Queue);

private:
    User readUser(const pqxx::result& result);
};

#endif // POSTREGSQ_DAO_H
