#include<random>
#include<string>
#include <array>
#include"gen_token.hpp"

std::array<uint8_t,32> Gen_token(){
    const std::string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dis(0,characters.size() -1);

    std::array<uint8_t,32> token;
    for (size_t i = 0; i < 32; i++){
        token[i] = static_cast<uint8_t>(characters[dis(gen)]);
    }
    return token;
}
