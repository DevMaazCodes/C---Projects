#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double balance=1000.0012;
    int choice;
    double deposit;
    double withdraw;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout <<"***********************************************ATM Menu***********************************************"<<'\n';
    std::cout <<"1. Check Balance"<<'\n'<<"2. Deposit Money"<<'\n'<<"3. Withdraw Money"<<'\n'<<"4. Exit"<<'\n';
    std::cout<<"Enter your choice:";
    std::cin>>choice;
    switch (choice){
        case 1:
        std::cout<<"Your current balance: $"<<balance;
        break;

        case 2:
        std::cout<<"Enter deposit amount:";
        std::cin>>deposit;
        if (deposit<0){
            std::cout<<"Please enter a valid input!";
        }
        else {
            balance+=deposit;
            std::cout<<"Deposit successful. Your new balance: $"<<balance ;
        }
        break;
        
        case 3:
        std::cout<<"Enter withdrawal amount:";
        std::cin>>withdraw;
        if (withdraw>balance){
            std::cout<<"Insufficient Balance!";
        }
        else if(withdraw<0) {
            std::cout<<"Please enter a valid amount!";
        }
        else{
            balance-=withdraw;
            std::cout<<"Withdrawal successful. Your new balance is: $"<<balance;
        }
        break;

        case 4:
        std::cout<<"Thank you for using the ATM";
        break;

        default: {
           std::cout<<"Please enter between number 1-4";
        }

    }


    return 0;
}