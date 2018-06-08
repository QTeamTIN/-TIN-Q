#include "Service.hpp"

Service::Service(SessionTable& session_tbl, Q_DAO &db_handler)
    :session_table_(session_tbl)
    ,db_handler_(db_handler)
{}
LinesManager &Service::getLinesManager()
{
    return lines_manager_;
}

SessionTable &Service::getSessionTable()
{
    return session_table_;
}

Q_DAO &Service::getDBHandler()
{
    return db_handler_;
}
