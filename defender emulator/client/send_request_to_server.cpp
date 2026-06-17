
#include "../shared/connection.hpp" //For connectToServershared()
#include "../shared/packet.hpp" // For Packet template


//void GETclient(std::string targetID){
    //connectToServerShared()
//}

void POSTclient(Packet P ){ //P = packet
    connectToServerShared(P);
} 