#include<iostream>
#include <algorithm>
#include <cctype>
#include "shared/deposit_middle.hpp"
#include "shared/login_middle.hpp"
#include "shared/withdraw_middle.hpp"
#include "shared/register_middle.hpp"
#include "shared/getBalance_middle.hpp"

char Choice(){
    std::string method1RaW;
    char method = ' ';
    std::cout << "==========Welcome to Rapix bank!==========" << "\n==========LOGIN || REGISTER==========\n";
    std::cin >> method1RaW;
    std::transform(method1RaW.begin(), method1RaW.end(), method1RaW.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    if (method1RaW == "login"){
        method = 'l';
    }
    if (method1RaW == "register"){
        method = 'r';
    }
    return method;
}

void LoggedInAccount(unsigned long long &ID){
    std::string method = "";
    while (true){
        std::system("cls");
        std::cout << "==========Welcome Back!==========\n==========BALANCE: "<<BankBalance(ID)<<  "==========\n==========DEPOSIT || WITHDRAW==========\n";
        std::cin >> method;
        std::transform(method.begin(), method.end(), method.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        if (method == "deposit"){
            double ATD;
            std::cout << "Amount: ";
            std::cin >> ATD;
            if (Deposit(ATD,ID) == true){
                std::cout << "Deposit was succesfull";
            }
        }
        if (method == "withdraw"){
            double ATW;
            std::cout << "Amount: ";
            std::cin >> ATW;
            if(Withdraw(ATW,ID)){
                std::cout << "Success";
            }
        }
    }
}


void account(){
    char czokobons = Choice();
    if (czokobons == 'l'){
        unsigned long long ID;
        std::string password = "";
        std::cout << "ID: ";
        std::cin >> ID;
        std::cout << "Password: ";
        std::cin >> password;
        if (Login(ID,password) == true){
            LoggedInAccount(ID);
        }
    }
    if(czokobons == 'r'){
        unsigned long long ID;
        std::string password = "";
        std::cout << "ID: ";
        std::cin >> ID;
        std::cout << "Password: ";
        std::cin >> password;
        Register(ID,password);
    }
}

int main(){
    account();
    return 0;
}