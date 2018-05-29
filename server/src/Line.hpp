#ifndef LINE_HPP
#define LINE_HPP

#include <list>
#include <mutex>
#include <algorithm>
#include <string>
#include <ctime>

class Line {
public:
    Line(int id, std::string name, std::string place, std::string description, time_t start, time_t end);
	Line(const Line& line);
    typedef int UserID;
    void addUser(UserID id);
    void deleteUser(UserID id);
    void letUserThrough(UserID id);
    void acceptLettingThrough(UserID id);
    bool next();
	int getAvgUserMinutes();


private:
	std::list<UserID> members_;
    mutable std::mutex members_mutex_;
    std::list<UserID> tmp_members_;  
    mutable std::mutex tmp_members_mutex_;
	int id_;
	std::string name_;
	std::string place_;
	std::string description_;
	time_t start_;
	time_t end_;
	int users_serviced_=0;
	int avg_user_minutes_ = 0;
	void countAvgUserMinutes();
};

#endif //LINE_HPP