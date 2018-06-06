#ifndef USER_HPP
#define USER_HPP
#include <list>
#include <mutex>
#include <algorithm>
#include <string>
#include <ctime>


class User
{
public:
    User();
    User(int user_id, std::string name, std::string display_name);
    User(int user_id, std::string name, std::string display_name, std::string mail);
    ~User();
    User& setDisplayName(const std::string& display_name) {this->display_name = display_name; return *this;}
    User& setMail(const std::string& mail) {this->mail = mail; return *this;}
    User& setName(const std::string& name) {this->name = name; return *this;}
    User& setUserId(int user_id) {this->user_id = user_id; return *this;}
    const std::string& getDisplayName() const {return display_name;}
    const std::string& getMail() const {return mail;}
    const std::string& getName() const {return name;}
    int getUserId() const {return user_id;}
    
    typedef std::tuple<std::list<int>, std::list<std::string>> QueryResponse;
	QueryResponse getUserParams() const;
    
private:
    int user_id;
    std::string name;
    std::string display_name;
    std::string mail;

};

#endif // USER_HPP