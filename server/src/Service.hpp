#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <map>
#include "LinesManager.hpp"
#include "SessionTable.hpp"
#include "PostgresQ_DAO.hpp"

class Service
{
public:
	Service(SessionTable& session_tbl, const Q_DAO& db_handler_);
	LinesManager lines_manager_;
    SessionTable* session_table_;
    const Q_DAO* db_handler_;
};

#endif // SERVICE_HPP