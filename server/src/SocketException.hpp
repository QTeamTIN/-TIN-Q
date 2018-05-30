#ifndef SOCKETEXCEPTION_HPP
#define SOCKETEXCEPTION_HPP

#include <exception>
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
        SEND
    };
    SocketException(Type type, const std::string &msg);
    const char *what() const noexcept override;

private:
    std::string typeToString(Type type) const;
    Type type_;
    std::string msg_;

};

#endif // SOCKETEXCEPTION_HPP
