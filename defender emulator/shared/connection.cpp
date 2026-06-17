#include<string> // for string
#include<cstdlib> // for uint
#include "packet.hpp" // for packet
#include "connection.hpp" //for declaring function
#include "connection_server_shared.hpp" // For connectToServerFunc


void connectToServerShared(Packet P){ //P = packet
    connectToServer(P);
}