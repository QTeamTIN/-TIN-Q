#include "User.hpp"

User::User()
{
}

User::~User()
{
}


User::User(int user_id, std::string name, std::string display_name){
    setUserId(user_id);
    setName(name);
    setDisplayName(display_name);
}

User::User(int user_id, std::string name, std::string display_name, std::string mail){
    setUserId(user_id);
    setName(name);
    setDisplayName(display_name);
    setMail(mail);
}


User::QueryResponse User::getUserParams() const
{
	std::list<int> int_args;
	std::list<std::string> str_args;
	int_args.push_back(user_id);
	str_args.push_back(name);
	str_args.push_back(display_name);
	str_args.push_back(mail);
	return std::make_tuple(int_args,str_args);
}
