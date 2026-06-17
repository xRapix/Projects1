#include <string>
#include <fstream>
#include <cstdint>
#include "../shared/packet.hpp"
#include "../nlohmann/json.hpp"


using json = nlohmann::json;
json loadData(){
    json data;
    std::ifstream file("clients/clients.json");
    if (file.is_open()){
        file >> data;
    }
   return data;
}


void SendRequest(const Packet &packet){ 
    std::string TargetID = std::to_string(packet.targetID);
    json data = loadData();
    if (data.contains(TargetID)){
        
    }
}

