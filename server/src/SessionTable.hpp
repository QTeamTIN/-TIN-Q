#ifndef SESSIONTABLE_HPP
#define SESSIONTABLE_HPP

#include <mutex>
#include <map>
#include <unistd.h>
#include <cstdlib>
#include "Session.hpp"
#include "LoginChecker.hpp"
#include "Q_DAO.hpp"
#include "Stoppable.hpp"

class SessionTable: public Stoppable
{
    static constexpr double DEFAULT_TIMEOUT = 15;      //s
    static constexpr int DEFAULT_REFRESH_PERIOD = 5;   //s
public:
    SessionTable(const Q_DAO& db_handler);

    int createSession(std::shared_ptr<User> user);
    void destroySession(int id);

    void setTimeout(double timeout);
    double getTimeout() const;

    void setRefreshPeriod(int period);
    int getRefreshPeriod() const;

    void checkTimeout();

    const Session &getSession(int id) const;
    bool ifSessionExists(int id) const;

    void refreshSession(int id);

    int login(const std::string& username, const std::string& hash);

    void run() override;

private:
    int generateID();
    bool isEngaged(int id) const;

    std::mutex guard_;

    std::map<int, Session> sessions_;
    double timeout_;
    int refresh_period_;

    LoginChecker login_;

};

#endif // SESSIONTABLE_HPP
