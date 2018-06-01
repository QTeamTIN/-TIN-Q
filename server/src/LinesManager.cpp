#include "LinesManager.hpp"

LinesManager::LinesManager() {

}

void LinesManager::addLine(std::string name, std::string place, std::string description, time_t start, time_t end) {
	LineID id = createID();
	std::unique_lock<std::mutex> add_lock(lines_mutex_);
	lines_.try_emplace(id, Line(id, name, place, description, start, end));
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

bool LinesManager::next(LineID line_id){
	return lines_.at(line_id).next();
}

int LinesManager::getAvgUserMinutes(LineID line_id){
	return lines_.at(line_id).getAvgUserMinutes();
}

int LinesManager::createID() {
	return last_id_++;
}

