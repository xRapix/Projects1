#pragma once
#include<cstdint>

#pragma pack(push, 1)
struct Packet
{
    std::uint32_t targetID;
    std::uint32_t senderID;
    std::uint32_t type;
    std::uint32_t size;
    std::uint32_t partList;
    std::uint32_t payload[32];
    std::uint32_t token[32];
};
#pragma pack(pop)