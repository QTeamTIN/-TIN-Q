#include "LinesManager.hpp"
#include <iostream>

LinesManager::LinesManager() : last_id_(0){
}

void LinesManager::addLine(std::string name, std::string place, std::string description, time_t start, time_t end) {
	LineID id = createID();
	std::unique_lock<std::mutex> add_lock(lines_mutex_);
	Line line(id, name, place, description, start, end);
	lines_.insert(std::make_pair(id, line));
}

void LinesManager::deleteLine(LineID id) {
	std::unique_lock<std::mutex> delete_lock(lines_mutex_);
	lines_.erase(id);
}

void LinesManager::addUser(LineID line_id, Line::UserID user_id){
	lines_.at(line_id).addUser(user_id);
}

void LinesManager::deleteUser(LineID line_id, Line::UserID user_id){
	lines_.at(line_id).deleteUser(user_id);
}

void LinesManager::letUserThrough(LineID line_id, Line::UserID user_id){
	lines_.at(line_id).letUserThrough(user_id);
}

void LinesManager::acceptLettingThrough(LineID line_id, Line::UserID user_id){
	lines_.at(line_id).acceptLettingThrough(user_id);
}

void LinesManager::next(LineID line_id){
	lines_.at(line_id).next();
}

int LinesManager::getAvgUserMinutes(LineID line_id){
	return lines_.at(line_id).getAvgUserMinutes();
}

LinesManager::LineID LinesManager::createID() {
	return last_id_++;
}

