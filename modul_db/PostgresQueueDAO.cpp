#include "PostgresQueueDAO.h"
#include <pqxx/pqxx>
#include "Connection.h"
PostgresQueueDAO::PostgresQueueDAO()
{
}

PostgresQueueDAO::~PostgresQueueDAO()
{
}

Queue PostgresQueueDAO::loadQueue(int userId, int queueId) {
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
    Queue queue;
    return queue.setUserId(result[0][0].as<int>())
                .setQueueId(result[0][1].as<int>())
                .setName(result[0][2].as<std::string>())
                .setPlace(result[0][3].as<std::string>())
                .setDescription(result[0][4].as<std::string>())
                .setStartTime(result[0][5].as<std::string>())
                .setEndTime(result[0][6].as<std::string>())
                .setDayOfWeek(result[0][7].as<int>());
}

void PostgresQueueDAO::saveQueue(Queue queue){
        std::stringstream stringQuery;
    stringQuery << "INSERT INTO QUEUES(USER_ID " <<
                    ", QUEUE_ID" << 
                    ", NAME" <<
                    ", PLACE" <<
                    ", DESCRIPTION" <<
                    ", START_TIME" <<
                    ", END_TIME" <<
                    ", DAY_OF_WEEK)" <<
                    " VALUES(" <<
                            queue.getUserId() <<
                    ", "  << queue.getQueueId() <<
                    ", '" << queue.getName()<< "'" <<
                    ", '" << queue.getPlace()<< "'" <<
                    ", '" << queue.getDescription()<< "'" <<
                    ", TIME '" << queue.getStartTime() << "'" <<
                    ", TIME '" << queue.getEndTime()<< "'" <<
                    ", " << queue.getDayOfWeek() <<
                    ");";
    std::cout << stringQuery.str() << std::endl;
    pqxx::result result = Connection::executeQuery(stringQuery.str());
}