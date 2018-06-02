#ifndef SESSIONTABLE_HPP
#define SESSIONTABLE_HPP

#include <map>
#include "Session.hpp"
#include "Q_DAO.hpp"

class SessionTable
{
public:
    SessionTable();

    int createSession();

    void setTimeout();
    double getTimeout() const;

    void checkTimeout();

    Session getSession() const;

private:
    int generateID();

    std::map<int, Session> sessions_;
    double timeout_;

};

#endif // SESSIONTABLE_HPP
