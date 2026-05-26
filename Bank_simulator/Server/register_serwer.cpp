#include<nlohmann/json.hpp>
#include<string>
#include<fstream>
#include "shared\register_middle.hpp"



using json = nlohmann::json;

void Register(unsigned long long ID, std::string PASSWORD){
    json AccountDetails;
    std::string ID_STR = std::to_string(ID);
    std::string CN = "ACCOUNT" + ID_STR;

    AccountDetails[CN]["ID"] = ID;
    AccountDetails[CN]["Password"] = PASSWORD;
    AccountDetails[CN]["Balance"] = 0.00;

    std::ofstream DB("DB.json");
    if (DB.is_open()){
        DB << AccountDetails.dump(4);
    }
}
