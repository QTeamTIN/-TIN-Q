#include "Line.hpp"

Line::Line(int id, std::string name, std::string place, std::string description, tm datetime) : id_(id), name_(name), place_(place), description_(description), datetime_(datetime){}

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

void Line::next(){
    std::unique_lock<std::mutex> del_lock(members_mutex_);
    members_.pop_front();
}