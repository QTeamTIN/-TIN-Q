#include "SessionTable.hpp"

SessionTable::SessionTable(const Q_DAO &db_handler)
    :timeout_(DEFAULT_TIMEOUT)
    ,login_(db_handler)
{}

int SessionTable::createSession(std::shared_ptr<User> user)
{
    std::lock_guard<std::mutex> lock(guard_);
    int id;
    while(isEngaged(id = generateID()));
    sessions_[id] = Session(user);
    std::cout<<"Create session with ID: "<<id<<std::endl;
    return id;
}

void SessionTable::destroySession(int id)
{
    std::lock_guard<std::mutex> lock(guard_);
    sessions_.erase(id);
}

void SessionTable::setTimeout(double timeout)
{
    timeout_ = timeout;
}

double SessionTable::getTimeout() const
{
    return timeout_;
}

void SessionTable::checkTimeout()
{
    for (auto it = sessions_.begin(); it != sessions_.end(); ++it) {
        std::time_t activity = it->second.getLastActivity();
        if (std::difftime(activity, std::time(0)) > timeout_) {
            destroySession(it->first);
        }
    }
}

const Session& SessionTable::getSession(int id) const
{
    return sessions_.at(id);
}

bool SessionTable::ifSessionExists(int id) const
{
    return sessions_.find(id) != sessions_.end();
}

int SessionTable::login(const std::string& username, const std::string &hash)
{
    auto user = login_.login(username, hash);
    if (user)
        return createSession(user);
    return 0;
}

int SessionTable::generateID()
{
    srand(time(0) + rand());
    return rand();
}

bool SessionTable::isEngaged(int id) const
{
    return sessions_.find(id) != sessions_.end();
}

