#ifndef SESSIONTABLE_HPP
#define SESSIONTABLE_HPP

#include <map>
#include <cstdlib>
#include "Session.hpp"
#include "Q_DAO.hpp"

class SessionTable
{
    static constexpr double DEFAULT_TIMEOUT = 600;
public:
    SessionTable();

    int createSession();
    void destroySession(int id);

    void setTimeout(double timeout);
    double getTimeout() const;

    void checkTimeout();

    const Session &getSession(int id) const;
    bool ifSessionExists(int id) const;

private:
    int generateID();
    bool isEngaged(int id) const;

    std::map<int, Session> sessions_;
    double timeout_;

};

#endif // SESSIONTABLE_HPP
