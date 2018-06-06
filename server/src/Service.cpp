#include "Service.hpp"

Service::Service(SessionTable& session_tbl)
    :session_table_(session_tbl)
{}

LinesManager &Service::getLinesManager()
{
    return lines_manager_;
}

SessionTable &Service::getSessionTable()
{
    return session_table_;
}
