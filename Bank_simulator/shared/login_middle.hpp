#pragma once
#include<string>
#include "nlohmann/json.hpp"

nlohmann::json DataLoad();
bool Login(unsigned long long ID, std::string Password);
