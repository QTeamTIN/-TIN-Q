#ifndef SOCKETEXCEPTION_HPP
#define SOCKETEXCEPTION_HPP

#include <errno.h>
#include <exception>
#include <string.h>
#include <string>

class SocketException: public std::exception
{
public:
    enum class Type {
        CLOSE,
        SHUTDOWN,
        LISTEN,
        ACCEPT,
        BIND,
        RECEIVE,
        SEND,
        SETSOCKOPT
    };
    SocketException(Type type);
    const char *what() const noexcept override;

private:
    std::string typeToString(Type type) const;
    Type type_;
    std::string msg_;

};

#endif // SOCKETEXCEPTION_HPP
