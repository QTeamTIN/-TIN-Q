#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <map>
#include "LinesManager.hpp"
#include "SessionTable.hpp"
#include "PostgresQ_DAO.hpp"

class Service
{
public:
	Service(SessionTable& session_tbl);
	LinesManager lines_manager_;
    SessionTable* session_table_;
};

#endif // SERVICE_HPP