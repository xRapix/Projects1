
#include<fstream>
#include<string>
#include "shared/withdraw_middle.hpp"
#include "shared/db_manager.hpp"
#include "nlohmann/json.hpp"

using json = nlohmann::json;


bool Withdraw(double Amount_Withdraw,unsigned long long ID){
    json data = DataLoad();

    std::string Acc_str = "ACCOUNT" + std::to_string(ID);
    double Money = data[Acc_str]["Balance"];
    if (Money >= Amount_Withdraw){
        Money -= Amount_Withdraw;
        DataSave(ID,Money);
        return true;
    }
    else{
        return false;
    }
}