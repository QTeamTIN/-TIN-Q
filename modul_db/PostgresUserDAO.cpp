#include "PostgresUserDAO.h"
#include <pqxx/pqxx>
#include "Connection.h"
PostgresUserDAO::PostgresUserDAO()
{
}

PostgresUserDAO::~PostgresUserDAO()
{
}

//Saving user in database
//TODO check if already exist - what then?
void PostgresUserDAO::saveUser(User user){
        std::stringstream stringQuery;
    stringQuery << "INSERT INTO USERS(USER_ID " <<
                    ", NAME" << 
                    ", PASSWORD" <<
                    ", DISPLAY_NAME" <<
                    ", MAIL) " <<
                    "VALUES(" <<
                            user.getUserId() <<
                    ", '" << user.getName()<< "'" <<
                    ", '" << user.getPassword()<< "'" <<
                    ", '" << user.getDisplayName()<< "'" <<
                    ", '" << user.getMail()<< "'" <<
                    ");";
    pqxx::result result = Connection::executeQuery(stringQuery.str());
}

//load user from database
User PostgresUserDAO::loadUser(int user_id){
    std::stringstream stringQuery;
    stringQuery << "SELECT USER_ID " <<
                    ", NAME" << 
                    ", PASSWORD" <<
                    ", DISPLAY_NAME" <<
                    ", MAIL " <<
                    "FROM USERS "<<
                    "WHERE USER_ID = " << user_id <<";";
                    
    pqxx::result result = Connection::executeQuery(stringQuery.str());
    User user;
    return user.setUserId(result[0][0].as<int>())
                .setName(result[0][1].as<std::string>())
                .setPassword(result[0][2].as<std::string>())
                .setDisplayName(result[0][3].as<std::string>())
                .setMail(result[0][4].as<std::string>());
}


