#include<nlohmann/json.hpp>
#include<fstream>
#include<string>
#include "shared/deposit_middle.hpp"
#include "shared/db_manager.hpp"
using json = nlohmann::json;



bool Deposit(double Amount_Deposit,unsigned long long ID){
    json data = DataLoad();

    std::string Acc_str = "ACCOUNT" + std::to_string(ID);
    double Money = data[Acc_str]["Balance"];
    Money = Money + Amount_Deposit; 
    DataSave(ID,Money);
    return true;
}