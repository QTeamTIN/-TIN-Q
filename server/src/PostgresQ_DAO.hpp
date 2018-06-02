#ifndef POSTREGSQ_DAO_H
#define POSTREGSQ_DAO_H
#include "Q_DAO.hpp"
#include "Connection.hpp"

class PostgresQ_DAO : public Q_DAO
{
public:
    PostgresQ_DAO();
    ~PostgresQ_DAO();
    void saveUser(User) const override;
    User loadUser(int) const override;
    User loadUser(const std::string& username) const override;
    void deleteUser(int) const override;
    void updateUser(User) const override;

    void saveQueue(Queue) const override;
    Queue loadQueue(int userId, int queueId) const override;
    void deleteQueue(int, int) const override;
    void updateQueue(Queue) const override;

private:
    User readUser(const pqxx::result& result) const;
};

#endif // POSTREGSQ_DAO_H
