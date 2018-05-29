#ifndef SOCKETEXCEPTION_HPP
#define SOCKETEXCEPTION_HPP

#include <exception>

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
        SEND
    }
    SocketException(Type type, const char* msg);
    const char* what() const;

private:
    Type type_;
    char* msg_;

};

#endif // SOCKETEXCEPTION_HPP
