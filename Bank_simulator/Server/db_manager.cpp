#include<nlohmann/json.hpp>
#include<fstream>
#include<string>
#include "shared/db_manager.hpp"

json DataLoad(){
    json data;
    std::ifstream DB("DB.json");
    if (DB.is_open()){
        DB >> data;
    }
    return data;
}

void DataSave(unsigned long long ID,double money){
    json Money = DataLoad();
    std::string Acc_str = "ACCOUNT" + std::to_string(ID);
    Money[Acc_str]["Balance"] = money;
    std::ofstream DB("DB.json");
    if (DB.is_open()){
        DB << Money.dump(4);
    }
}