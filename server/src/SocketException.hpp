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
    };
    SocketException(Type type, const char* msg);
    virtual const char* what() const noexcept;

private:
    const char *typeToString(Type type);
    Type type_;
    const char* msg_;

};

#endif // SOCKETEXCEPTION_HPP
