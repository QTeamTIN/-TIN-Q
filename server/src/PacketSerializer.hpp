#ifndef PACKETSERIALIZER_HPP
#define PACKETSERIALIZER_HPP

#include <string>
#include <exception>

#include "cppQ.pb.h"

using namespace packet;

typedef PACKET Packet;

class PacketSerializer
{
public:

    class SerializerException: public std::exception {
    public:
        SerializerException(const std::string& err)
            :err_(err) {}

        const char * what() const throw() {
            return err_.c_str();
        }
    private:
        std::string err_;
    };

    PacketSerializer();

    Packet parse(const std::string& packet_str);
    std::string serialize(const Packet& pack);
};

#endif // PACKETSERIALIZER_HPP
