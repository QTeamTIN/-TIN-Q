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
	void callFunction(int id, std::vector<int> int_args, std::vector<std::string> string_args);
	void addLine(std::vector<int> int_args, std::vector<std::string> string_args);
	/*void deleteLine(LinesManager::LineID);
	void addUser(LinesManager::LineID line_id, Line::UserID user_id);
	void deleteUser(LinesManager::LineID line_id, Line::UserID user_id);
	void letUserThrough(LinesManager::LineID line_id, Line::UserID user_id);
	void acceptLettingThrough(LinesManager::LineID line_id, Line::UserID user_id);
	bool next(LinesManager::LineID line_id);
	int getAvgUserMinutes(LinesManager::LineID line_id);*/


private:
	std::unique_ptr<Service> service;
	//std::map<int, AnyCallable<void>> functions_map_;

};

#endif // SERVERAPI_HPP
