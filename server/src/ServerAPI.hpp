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
	ServerAPI();
	//ServerAPI() = delete;
	//ServerAPI(std::unique_ptr<Service> service) : service(std::move(service)) {};
	~ServerAPI() = default;

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

private:
	std::unique_ptr<Service> service;

};

#endif // SERVERAPI_HPP
