#pragma once
#include "nlohmann/json.hpp"

using json = nlohmann::json;

json DataLoad();
void DataSave(unsigned long long ID,double money);