#pragma once

#include "PcapDeclarations.h"

namespace PcapDotNet { namespace Core 
{
    private ref class PacketHeader
    {
    public:
        static void GetPcapHeader(pcap_pkthdr &header, BPacket::Packet^ packet);
    };
}}