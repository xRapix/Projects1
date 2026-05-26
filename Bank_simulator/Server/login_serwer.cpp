#include<nlohmann/json.hpp>
#include<fstream>
#include "shared/login_middle.hpp"
#include "shared/db_manager.hpp"

using json = nlohmann::json;


bool Login(unsigned long long ID,std::string Password){
    json data = DataLoad();
    std::string Acc_string = "ACCOUNT" + std::to_string(ID);
    if (data.contains(Acc_string)){
        if (data[Acc_string]["Password"] == Password){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}