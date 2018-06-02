#include "SessionTable.hpp"

SessionTable::SessionTable()
{

}

int SessionTable::createSession()
{
    int id;
    while(isEngaged(id = generateID()));
    sessions_[id] = Session();
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

