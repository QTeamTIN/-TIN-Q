#include "PostgresQ_DAO.hpp"
#include <pqxx/pqxx>
#include "Connection.hpp"

PostgresQ_DAO::PostgresQ_DAO()
{
}

PostgresQ_DAO::~PostgresQ_DAO()
{
}

//Saving user in database
//TODO check if already exist - what then?
//throws std::invalid_argument if not all mandatory argument are filled
void PostgresQ_DAO::saveUser(User user){
    std::stringstream stringQuery;

    if(user.isUserIdFilled()
        && user.isUserIdFilled()
        && user.isNameFilled()
        && user.isPasswordFilled()
        && user.isDisplayNameFilled()        
        ) {    
        stringQuery << "INSERT INTO USERS(USER_ID " <<
                ", NAME" << 
                ", PASSWORD" <<
                ", DISPLAY_NAME";
        if(user.isMailFilled()) {
            stringQuery << ", MAIL";
        }
        stringQuery << ")" <<
                " VALUES(" << user.getUserId() << 
                ", '" << user.getName()<< "'" <<
                ", '" << user.getPassword()<< "'" <<
                ", '" << user.getDisplayName()<< "'";
        if(user.isMailFilled()) {
            stringQuery << ", '" << user.getMail() << "'";
        }
        stringQuery << ");";
        
        pqxx::result result = Connection::executeQuery(stringQuery.str());
    }
    else {
        throw std::invalid_argument("Not all mandatory values are set: USER_ID, NAME, PASSWORD, DISPLAY_NAME");
    }
    
}

//load user from database
User PostgresQ_DAO::loadUser(int user_id){
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
    if(result.size() > 0) {
        user = user.setUserId(result[0][0].as<int>())
                    .setName(result[0][1].as<std::string>())
                    .setPassword(result[0][2].as<std::string>())
                    .setDisplayName(result[0][3].as<std::string>());
        user.setMandatoryTrue();
        if(!result[0][4].is_null()) {
           user = user.setMail(result[0][4].as<std::string>())
                        .setMailFilled(true);
        }
    }
    else {
        throw std::invalid_argument("No User with given userId");
    }
    return user;
}

void PostgresQ_DAO::deleteUser(int userId) {
    std::stringstream stringQuery;
    stringQuery << "DELETE FROM USERS" <<
                   " WHERE USER_ID = " << userId << 
                   ";";
    pqxx::result result = Connection::executeQuery(stringQuery.str());
}

void PostgresQ_DAO::updateUser(User user) {
    std::stringstream stringQuerySelect;
    stringQuerySelect << "SELECT * FROM USERS" <<
                   " WHERE USER_ID = " << user.getUserId() <<
                   ";";
    pqxx::result resultSelect = Connection::executeQuery(stringQuerySelect.str());
    
    if(resultSelect.size() > 0) {
        std::stringstream stringQuery;
        stringQuery << "UPDATE USERS" <<
                       " SET" <<
                       " NAME = '" << user.getName() << "'" <<
                       ", PASSWORD = '" << user.getPassword() << "'" <<
                       ", DISPLAY_NAME = '" << user.getDisplayName() << "'";
        if(user.isMailFilled()) {
         stringQuery <<", MAIL = '" << user.getMail() << "'";
        }
        stringQuery << " WHERE USER_ID = " << user.getUserId() << 
                       ";";
        pqxx::result result = Connection::executeQuery(stringQuery.str());
    }
    else {
        saveUser(user);
    }

}                                    



//Load Queue from base
Queue PostgresQ_DAO::loadQueue(int userId, int queueId) {
    std::stringstream stringQuery;
    stringQuery << "SELECT USER_ID " <<
                    ", QUEUE_ID" << 
                    ", NAME" <<
                    ", PLACE" <<
                    ", DESCRIPTION" <<
                    ", START_TIME" <<
                    ", END_TIME" <<
                    ", DAY_OF_WEEK" <<
                    " FROM QUEUES "<<
                    " WHERE USER_ID = " << userId <<
                    " AND QUEUE_ID = " << queueId <<
                    ";";
                    
    pqxx::result result = Connection::executeQuery(stringQuery.str());
    if(result.size() > 0) {
        Queue queue;
        queue = queue.setUserId(result[0][0].as<int>())
                    .setQueueId(result[0][1].as<int>())
                    .setName(result[0][2].as<std::string>())
                    .setPlace(result[0][3].as<std::string>());
          
        if(!result[0][4].is_null()) {
           queue = queue.setDescription(result[0][4].as<std::string>())
                        .setDescriptionFilled(true);
        }
        if(!result[0][5].is_null()) {
           queue = queue.setStartTime(result[0][5].as<std::string>())
                        .setStartTimeFilled(true);
        }
        if(!result[0][6].is_null()) {
           queue = queue.setEndTime(result[0][6].as<std::string>())
                        .setEndTimeFilled(true);
        }
        if(!result[0][7].is_null()) {
           queue = queue.setDayOfWeek(result[0][7].as<int>())
                        .setDayOfWeekFilled(true);
        }            
        return queue;
    }
    else {
        throw std::invalid_argument("No Queue with given userId and queueId");
    }
}

void PostgresQ_DAO::saveQueue(Queue queue){
        std::stringstream stringQuery;
        
    if(queue.isQueueIdFilled()
        && queue.isUserIdFilled()
        && queue.isNameFilled()
        && queue.isPlaceFilled()
        )
    {
        stringQuery << "INSERT INTO QUEUES(USER_ID " <<
                        ", QUEUE_ID" << 
                        ", NAME" <<
                        ", PLACE";
        if(queue.isDescriptionFilled()) {
                stringQuery << ", DESCRIPTION";
        }
        if(queue.isStartTimeFilled()) {
                stringQuery << ", START_TIME";
        }
        if(queue.isEndTimeFilled()) {
                stringQuery << ", END_TIME";
        }
        if(queue.isDayOfWeekFilled()) {
                stringQuery << ", DAY_OF_WEEK";
        }
        stringQuery <<    ")" <<
                        " VALUES(" <<
                                queue.getUserId() <<
                        ", "  << queue.getQueueId() <<
                        ", '" << queue.getName()<< "'" <<
                        ", '" << queue.getPlace()<< "'";
                        
        if(queue.isDescriptionFilled()) {
                stringQuery << ", '" << queue.getDescription() << "'";
        }
        if(queue.isStartTimeFilled()) {
                stringQuery << ", '" << queue.getStartTime() << "'";
        }
        if(queue.isEndTimeFilled()) {
                stringQuery << ", '" << queue.getEndTime() << "'";
        }
        if(queue.isDayOfWeekFilled()) {
                stringQuery << ", '" << queue.getDayOfWeek() << "'";
        }
        stringQuery << ");";
        std::cout << stringQuery.str() << std::endl;
        pqxx::result result = Connection::executeQuery(stringQuery.str());
    }
    else {
        throw std::invalid_argument("Not all mandatory values are set: USER_ID, QUEUE_ID, NAME, PLACE");
    }
}


void PostgresQ_DAO::deleteQueue(int userId, int queueId) {
    std::stringstream stringQuery;
    stringQuery << "DELETE FROM QUEUES" <<
                   " WHERE USER_ID = " << userId <<
                   " AND QUEUE_ID = " << queueId << 
                   ";";
    pqxx::result result = Connection::executeQuery(stringQuery.str());
}                  


void PostgresQ_DAO::updateQueue(Queue queue) {
        std::stringstream stringQuerySelect;
    stringQuerySelect << "SELECT * FROM QUEUES" <<
                   " WHERE USER_ID = " << queue.getUserId() <<
                   " AND QUEUE_ID = " << queue.getQueueId() <<
                   ";";
    pqxx::result resultSelect = Connection::executeQuery(stringQuerySelect.str());
    
    if(resultSelect.size() > 0) {
        std::stringstream stringQuery;
        stringQuery << "UPDATE QUEUES" <<
                       " SET" <<
                       " NAME = '" << queue.getName() << "'" <<
                       ", PLACE = '" << queue.getPlace() << "'";
                       
        if(queue.isDescriptionFilled()) {
         stringQuery <<", DESCRIPTION = '" << queue.getDescription() << "'";
        }
        if(queue.isStartTimeFilled()) {
         stringQuery <<", START_TIME = '" << queue.getStartTime() << "'";
        }
        if(queue.isEndTimeFilled()) {
         stringQuery <<", END_TIME = '" << queue.getEndTime() << "'";
        }
        if(queue.isDayOfWeekFilled()) {
         stringQuery <<", DAY_OF_WEEK = '" << queue.getDayOfWeek() << "'";
        }
        stringQuery << " WHERE USER_ID = " << queue.getUserId() <<
                       " AND QUEUE_ID = " << queue.getQueueId() <<
                       ";";
        pqxx::result result = Connection::executeQuery(stringQuery.str());
    }
    else {
        saveQueue(queue);
    }
}  
