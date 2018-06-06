#include "Service.hpp"

Service::Service(SessionTable& session_tbl, const Q_DAO& db_handler):
 session_table_(&session_tbl)
,db_handler_(&db_handler)
{

}