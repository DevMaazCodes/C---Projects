#include <iostream>
#include <cmath>
#include <iomanip>
double getvalidamount();
double deposit(double balance);
double withdraw(double balance);
int main() {
    double balance=1000.0012;
    int choice;
   
    int pass;
    std::cout<<std::fixed<<std::setprecision(2);
    do{ 
    std::cout<<"Hi user, please enter your pin"<<'\n';
    std::cin>>pass;
       if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout<<"Please enter a valid pin"<<'\n';
        continue;
    }
         else if (pass!=1234){

        std::cout<<"Your pin is incorrect"<<std::endl;
    }   
           } while (pass!=1234);

    std::cout <<"***********************************************ATM Menu***********************************************"<<'\n';
   do { 
    std::cout <<"1. Check Balance"<<'\n'<<"2. Deposit Money"<<'\n'<<"3. Withdraw Money"<<'\n'<<"4. Exit"<<'\n';
    std::cout<<"Enter your choice:";
    std::cin>>choice;
    
    switch (choice){
        case 1:
        std::cout<<"Your current balance: $"<<balance<<'\n'<<'\n';
        break;

        case 2:
        balance = deposit(balance);
        break;
        
       case 3:
       balance = withdraw( balance);
       break;

       case 4:
       std::cout<<"Thank you for using the ATM"<<'\n';
       break;

       default: 
       if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout<<"Please enter a valid number"<<'\n'<<'\n';}
       else{
        std::cout<<"Please enter between number 1-4"<<'\n'<<'\n';
       }
       
        

    } }while (choice!=4);
   


    return 0;
}



double getvalidamount(){
double amount;
do   {
    std::cout<<"Enter your amount"<<'\n';
    std::cin>>amount;
    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout<<"Please enter a valid amount"<<'\n';
       
    } 
    else if(amount<=0){
        std::cout<<"Please enter a valid amount"<<'\n';
    }
    else{
        return amount;
    }

}  while (true);
}

  double deposit( double balance){
   double amount=getvalidamount();
   balance+=amount;
    std::cout<<"Deposit Successful, your new balance is: $"<<balance<<'\n'<<'\n';
        return balance;
   
   
}

double withdraw( double balance){
    
    do{
   double amount=getvalidamount();
   if (amount>balance){
        std::cout<<"Low balance, returning to menu"<<'\n'<<'\n';
         return balance;
    }
    else{
        balance-=amount;
        std::cout<<"Withdraw Successful, your new balance is: $"<<balance<<'\n'<<'\n';
    return balance;}



    }while(true);
    
}