#ifndef POSTREGSQ_DAO_H
#define POSTREGSQ_DAO_H
#include "Q_DAO.hpp"
#include "Connection.hpp"

class PostgresQ_DAO : public Q_DAO
{
public:
    PostgresQ_DAO();
    ~PostgresQ_DAO();
    void saveUser(UserTuple) const override;
    UserTuple loadUser(int) const override;
    UserTuple loadUser(const std::string& username) const override;
    void deleteUser(int) const override;
    void updateUser(UserTuple) const override;

    void saveQueue(QueueTuple) const override;
    QueueTuple loadQueue(int userId, int queueId) const override;
    void deleteQueue(int, int) const override;
    void updateQueue(QueueTuple) const override;

private:
    UserTuple readUser(const pqxx::result& result) const;
    QueueTuple readQueue(const pqxx::result& result) const;
};

#endif // POSTREGSQ_DAO_H
