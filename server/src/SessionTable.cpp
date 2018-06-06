#include "SessionTable.hpp"

SessionTable::SessionTable(const Q_DAO &db_handler)
    :timeout_(DEFAULT_TIMEOUT)
    ,refresh_period_(DEFAULT_REFRESH_PERIOD)
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
    std::cout<<"Destroy session with ID: "<<id<<std::endl;
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

void SessionTable::setRefreshPeriod(int period)
{
    refresh_period_ = period;
}

int SessionTable::getRefreshPeriod() const
{
    return refresh_period_;
}

void SessionTable::checkTimeout()
{
    std::cout<<"Session table refreshing\n";
    for (auto it = sessions_.begin(); it != sessions_.end(); ++it) {
        std::time_t activity = it->second.getLastActivity();
        if (std::difftime(std::time(0), activity) > timeout_) {
            std::cout<<"Session "<<it->first<<" inactive\n";
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

void SessionTable::refreshSession(int id)
{
    sessions_.at(id).update();
    std::cout << "Session " << id << " refreshed\n";
}

int SessionTable::login(const std::string& username, const std::string &hash)
{
    auto user = login_.login(username, hash);
    if (user) {
        std::cout<<"User "<<username<<" logged in\n";
        return createSession(user);
    }
    std::cout<<"User "<<username<<" login failure\n";
    return 0;
}

void SessionTable::run()
{
    while(!stopRequested()) {
        sleep(refresh_period_);
        checkTimeout();
    }
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

