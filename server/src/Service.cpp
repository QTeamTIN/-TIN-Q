#include "Service.hpp"

Service::Service(SessionTable& session_tbl)
{
    session_table_ = &session_tbl; 
}