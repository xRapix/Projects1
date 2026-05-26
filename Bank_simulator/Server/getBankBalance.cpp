#include<nlohmann/json.hpp>
#include<fstream>
#include<string>
#include"shared/getBalance_middle.hpp"
#include "shared/db_manager.hpp"

using json = nlohmann::json;




double BankBalance(unsigned long long ID){
    json data = DataLoad();
    std::string Acc_str = "ACCOUNT" + std::to_string(ID);
    double Money = data[Acc_str]["Balance"];
    return Money;
}