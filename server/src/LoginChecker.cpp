#include "LoginChecker.hpp"


LoginChecker::LoginChecker(const Q_DAO &db_handler)
    :db_handler_(db_handler)
{

}

std::shared_ptr<User> LoginChecker::login(const std::string &username, const std::string& hash)
{
    try {
        auto user = std::make_shared<User>(db_handler_.loadUser(username));
        if (hash == user->getPassword())
            return user;

    } catch (const std::invalid_argument& e) {
        std::cout<<e.what()<<std::endl;
    }
    return std::shared_ptr<User>();
}
