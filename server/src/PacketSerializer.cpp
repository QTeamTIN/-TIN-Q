#include "PacketSerializer.hpp"

PacketSerializer::PacketSerializer()
{

}

Packet PacketSerializer::parse(const std::string &packet_str)
{
    Packet pack;
    if ( !pack.ParseFromString(packet_str) ) {
        throw SerializerException("Invalid packet. Parsing failed.");
    }
    return pack;
}

std::string PacketSerializer::serialize(const Packet &pack)
{
    std::string out;
    if ( !pack.SerializeToString(&out)) {
        throw SerializerException("Invalid packet. Serialization failed.");
    }
    return out;
}
