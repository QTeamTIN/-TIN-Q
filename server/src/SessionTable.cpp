#include "SessionTable.hpp"

SessionTable::SessionTable()
    :timeout_(DEFAULT_TIMEOUT)
{}

int SessionTable::createSession()
{
    int id;
    while(isEngaged(id = generateID()));
    sessions_[id] = Session();
    std::cout<<"Create session with ID: "<<id<<std::endl;
    return id;
}

void SessionTable::destroySession(int id)
{
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

int SessionTable::generateID()
{
    srand(time(0) + rand());
    return rand();
}

bool SessionTable::isEngaged(int id) const
{
    return sessions_.find(id) != sessions_.end();
}

