#pragma once
#include<nlohmann/json.hpp>


using json = nlohmann::json;

json DataLoad();
double BankBalance(unsigned long long ID);