#ifndef PACKETSERIALIZER_HPP
#define PACKETSERIALIZER_HPP

#include <string>
#include "cppQ.pb.h"

using namespace packet;

typedef PACKET Packet;

class PacketSerializer
{
public:
    PacketSerializer();

    Packet parse(const std::string& packet_str);
    std::string serialize(const Packet& pack);
};

#endif // PACKETSERIALIZER_HPP
