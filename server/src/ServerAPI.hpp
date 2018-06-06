#ifndef SERVERAPI_HPP
#define SERVERAPI_HPP

#include <memory>
#include <vector>
#include <iostream>
#include <string>
#include "Service.hpp"

class ServerAPI
{
public:

    ServerAPI(Service &service);
	typedef std::tuple<std::list<int>, std::list<std::string>> QueryResponse;

	/* POSSIBLE FUNCTIONS
		0 - addLine
		1 - deleteLine
		2 - addUser
		3 - deleteUser
		4 - letUserThrough
		5 - acceptLettingThrough
		6 - next
	*/
	bool callFunction(int id, std::vector<int> int_args, std::vector<std::string> string_args);

	/* POSSIBLE FUNCTIONS
		0 - getLine
        1 - getUserByName
        2 - getUserById
        3 - getQueue
	*/
	QueryResponse callQuery(int id, std::vector<int> int_args, std::vector<std::string> string_args);
	
    int callLogin(std::string name, std::string hash);
    
    
private:
    Service& service;
};

#endif // SERVERAPI_HPP
