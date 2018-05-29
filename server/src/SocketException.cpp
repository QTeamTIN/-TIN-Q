#include "SocketException.hpp"

SocketException::SocketException(SocketException::Type type, const char *msg)
    :type_(type)
    ,msg_(msg)
{}
