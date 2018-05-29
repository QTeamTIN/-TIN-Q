#include "Connection.h"

Connection::Connection()
{

}

//get instance of singleton
pqxx::connection& Connection::getConnectionInstance() {
	static std::string connection_string("host=95.85.41.214 dbname=Qdb user=qclient password=kolejeczka123");
	static pqxx::connection con(connection_string.c_str()); 
    return con;
}  

//executes given query
pqxx::result Connection::executeQuery(std::string query) {
    pqxx::work wrk(getConnectionInstance());
	pqxx::result res = wrk.exec(query.c_str());
    wrk.commit();
    return res;
}


Connection::~Connection()
{
}

