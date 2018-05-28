#ifndef LINE_HPP
#define LINE_HPP

#include <list>
#include <mutex>
#include <algorithm>
#include <string>
#include <ctime>

class Line {
public:
    Line(int id, std::string name, std::string place, std::string description, tm datetime);
    typedef int UserID;
    void addUser(UserID id);
    void deleteUser(UserID id);
    void letUserThrough(UserID id);
    void acceptLettingThrough(UserID id);
    void next();


private:
	std::list<UserID> members_;
    std::mutex members_mutex_;
    std::list<UserID> tmp_members_;  
    std::mutex tmp_members_mutex_;
	int id_;
	std::string name_;
	std::string place_;
	std::string description_;
	tm datetime_;
	



};

#endif //LINE_HPP