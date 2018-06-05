#include "LoginChecker.hpp"


LoginChecker::LoginChecker(const Q_DAO &db_handler)
    :db_handler_(db_handler)
{

}

std::shared_ptr<User> LoginChecker::login(const std::string &username, const std::string& hash)
{
    try {
        auto userTuple = std::make_shared<UserTuple>(db_handler_.loadUser(username));
        if (hash == userTuple->getPassword())
            return std::make_shared<User>(userTuple->getUser());

    } catch (const std::invalid_argument& e) {
        std::cout<<e.what()<<std::endl;
    }
    return std::shared_ptr<User>();
}
