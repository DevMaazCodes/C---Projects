#include<iostream>
int getdigits(const int &digits);
int sumodd(const std::string &cardnum);
int sumeven(const std::string &cardnum);
int main(){
    std::string cardnum;
    std::cout<<"Enter your card number to check validation: ";
    std::getline(std::cin, cardnum);
    int result= sumodd(cardnum)+sumeven(cardnum);
    if ((result%10)!=0){
      std::cout<<"Credit card is invalid";
    }
    else{
        std::cout<<"Credit card is valid";
    }


    return 0;
}
int getdigits( const int &digit){
     int sorted= (digit % 10)+ ((digit/10)%10);
     return sorted;
}
int sumodd(const std::string &cardnum){
    int sum=0;
     for (int i= cardnum.length()-1; i>=0; i-=2){
        sum+=(cardnum[i]-('0'));
     }
     return sum;
}
int sumeven(const std::string &cardnum){
    int sum=0;
    for (int i=cardnum.size()-2; i>=0; i-=2){
        sum+=getdigits((cardnum[i]-'0')*2);
    }
    return sum;
}