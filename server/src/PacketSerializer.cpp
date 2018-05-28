#include "PacketSerializer.hpp"

PacketSerializer::PacketSerializer()
{

}

Packet PacketSerializer::parse(const std::string &packet_str)
{
    Packet pack;
    //TODO custom exception
    if ( !pack.ParseFromString(packet_str + "trelemorele") ) {
        throw SerializerException("Invalid packet. Parsing failed.");
    }
    return pack;
}

std::string PacketSerializer::serialize(const Packet &pack)
{
    std::string out;
    //TODO custom exception

    if ( !pack.SerializeToString(&out)) {
        throw SerializerException("Invalid packet. Serialization failed.");
    }
    return out;
}

