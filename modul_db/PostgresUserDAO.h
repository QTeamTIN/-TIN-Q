#ifndef POSTGRESUSERDAO_H
#define POSTGRESUSERDAO_H
#include "UserDAO.h"

//Class with UserDAO interface
//Uses connection to Postgresql 9.6 
//and implements basic functions
class PostgresUserDAO : public UserDAO
{
public:
    PostgresUserDAO();
    ~PostgresUserDAO();
    void saveUser(User);
    User loadUser(int);
};

#endif // POSTGRESUSERDAO_H
