#include "SocketException.hpp"

#include <map>

SocketException::SocketException(SocketException::Type type, const char *msg)
    :type_(type)
    ,msg_(msg)
{}

const char *SocketException::what() const noexcept
{

}

const char *SocketException::typeToString(SocketException::Type type)
{
    static std::map<SocketException::Type, std::string> type_str = {
        {SocketException::Type::ACCEPT, "Accept"},
        {SocketException::Type::BIND, "Bind"},
        {SocketException::Type::CLOSE, "Close"},
        {SocketException::Type::LISTEN, "Listen"},
        {SocketException::Type::RECEIVE, "Receive"},
        {SocketException::Type::SEND, "Send"},
        {SocketException::Type::SHUTDOWN, "Shutdown"}
    };
    return type_str[type].c_str();
}

