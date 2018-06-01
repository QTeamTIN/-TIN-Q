#include "Line.hpp"

Line::Line(int id, std::string name, std::string place, std::string description, time_t start, time_t end) : id_(id), name_(name), place_(place), description_(description), start_(start), end_(end){}

Line::Line(const Line & line)
{
	{	std::unique_lock<std::mutex> lock(line.members_mutex_);
		members_ = line.members_;
	}
	{	std::unique_lock<std::mutex> lock(line.tmp_members_mutex_);
		tmp_members_ = line.tmp_members_;
	}   
	id_=line.id_;
	name_=line.name_;
	place_=line.place_;
	description_=line.description_;
	start_=line.start_;
	end_=line.end_;	
}

void Line::addUser(UserID id){
    std::unique_lock<std::mutex> add_lock(members_mutex_);
    if(std::find(members_.begin(), members_.end(), id)==members_.end())
        members_.push_back(id);
}

void Line::deleteUser(UserID id){
    std::unique_lock<std::mutex> del_lock(members_mutex_);
    members_.remove(id);
}

void Line::letUserThrough(UserID id){
    std::unique_lock<std::mutex> members_lock(members_mutex_,std::defer_lock);
    std::unique_lock<std::mutex> tmp_members_lock(tmp_members_mutex_,std::defer_lock);
	std::lock(members_lock, tmp_members_lock);
    members_.remove(id);
    tmp_members_.push_back(id);
}

void Line::acceptLettingThrough(UserID id){
    std::unique_lock<std::mutex> members_lock(members_mutex_,std::defer_lock);
    std::unique_lock<std::mutex> tmp_members_lock(tmp_members_mutex_,std::defer_lock);
	std::lock(members_lock, tmp_members_lock);
    members_.splice(++std::find(members_.begin(), members_.end(), id), tmp_members_);
}

bool Line::next(){
    std::unique_lock<std::mutex> del_lock(members_mutex_);
	if (members_.empty())
		return false;
    members_.pop_front();
	users_serviced_++;
	countAvgUserMinutes();
	return true;
}

void Line::countAvgUserMinutes() {
	std::time_t now = std::time(0);
	avg_user_minutes_ = (now - start_) / 60 / users_serviced_;
}

int Line::getAvgUserMinutes() {
	return avg_user_minutes_;
}