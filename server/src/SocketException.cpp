#include "SocketException.hpp"

#include <map>

SocketException::SocketException(SocketException::Type type, const std::string& msg)
    :type_(type)
{
    msg_ = typeToString(type_) + msg;
}

const char *SocketException::what() const noexcept
{
    return msg_.c_str();
}

std::string SocketException::typeToString(SocketException::Type type) const
{
    static std::map<SocketException::Type, std::string> type_str = {
        {SocketException::Type::ACCEPT, "Accept: "},
        {SocketException::Type::BIND, "Bind: "},
        {SocketException::Type::CLOSE, "Close: "},
        {SocketException::Type::LISTEN, "Listen: "},
        {SocketException::Type::RECEIVE, "Receive: "},
        {SocketException::Type::SEND, "Send: "},
        {SocketException::Type::SHUTDOWN, "Shutdown: "}
    };
    return type_str[type];
}

