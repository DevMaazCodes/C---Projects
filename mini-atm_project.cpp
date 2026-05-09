#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double balance=1000.0012;
    int choice=0;
    double deposit;
    double withdraw;
    int pass=0;
    std::cout<<std::fixed<<std::setprecision(2);
    while(pass!=1234){ 
    std::cout<<"Hi user, please enter your pin"<<'\n';
    std::cin>>pass;
    if (pass!=1234){
        std::cout<<"Your pin is incorrect"<<std::endl;
    }
}
    std::cout <<"***********************************************ATM Menu***********************************************"<<'\n';
    while (choice!=4){ std::cout <<"1. Check Balance"<<'\n'<<"2. Deposit Money"<<'\n'<<"3. Withdraw Money"<<'\n'<<"4. Exit"<<'\n';
    std::cout<<"Enter your choice:";
    std::cin>>choice;
    switch (choice){
        case 1:
        std::cout<<"Your current balance: $"<<balance<<'\n';
        break;

        case 2:
        std::cout<<"Enter deposit amount:"<<'\n';
        std::cin>>deposit;
        if (deposit<0){
            std::cout<<"Please enter a valid input!"<<'\n';
        }
        else {
            balance+=deposit;
            std::cout<<"Deposit successful. Your new balance: $"<<balance<<'\n' ;
        }
        break;
        
        case 3:
        std::cout<<"Enter withdrawal amount:"<<'\n';
        std::cin>>withdraw;
        if (withdraw>balance){
            std::cout<<"Insufficient Balance!"<<'\n';
        }
        else if(withdraw<0) {
            std::cout<<"Please enter a valid amount!"<<'\n';
        }
        else{
            balance-=withdraw;
            std::cout<<"Withdrawal successful. Your new balance is: $"<<balance<<'\n';
        }
        break;

        case 4:
        std::cout<<"Thank you for using the ATM"<<'\n';
        break;

        default: {
           std::cout<<"Please enter between number 1-4"<<'\n';
        }

    }}
   


    return 0;
}