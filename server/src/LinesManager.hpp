#ifndef LINES_MANAGER_HPP
#define LINES_MANAGER_HPP

#include <map>
#include <utility>
#include <memory>
#include "Line.hpp"

class LinesManager {
public:
	LinesManager();
	typedef int LineID;
	void addLine(std::string name, std::string place, std::string description, time_t start, time_t end);
	void deleteLine(LineID);
	void addUser(LineID line_id,Line::UserID user_id);
	void deleteUser(LineID line_id, Line::UserID user_id);
	void letUserThrough(LineID line_id, Line::UserID user_id);
	void acceptLettingThrough(LineID line_id, Line::UserID user_id);
	bool next(LineID line_id);
	int getAvgUserMinutes(LineID line_id);

private:
	std::map<int, Line> lines_;
	std::mutex lines_mutex_;
	LineID createID();
	LineID last_id_=0;
};

#endif //LINES_MANAGER_HPP