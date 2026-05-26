#pragma once
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

void Register(unsigned long long ID, std::string PASSWORD);