#ifndef SERVERAPI_HPP
#define SERVERAPI_HPP

#include "Service.hpp"
#include <memory>

class ServerAPI
{
public:
	ServerAPI();
	void createLine();
	void joinLine();
	void removeLine();
	void checkLineState();

private:
	std::unique_ptr<Service> service;
};

#endif // SERVERAPI_HPP
