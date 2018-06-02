#ifndef LOGINMODULE_HPP
#define LOGINMODULE_HPP

#include "Q_DAO.hpp"
#include "User.hpp"

class LoginChecker
{
public:
    LoginChecker(const Q_DAO& db_handler);

    std::shared_ptr<User> login(const std::string& username, int pass_hash);
private:
    const Q_DAO& db_handler_;
};

#endif // LOGINMODULE_HPP
