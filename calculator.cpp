#include <iostream>
using db = double;
int main(){
    db num1;
    char op;
    db num2;
    std::cout<<"******************************Calculator******************************"<< std::endl;
    std::cout<<"Enter first number"<< std::endl;
    std::cin>>num1;
    std::cout<<"Enter what you want to do (+, -, *, /)"<< std::endl;
    std::cin>>op;
    std::cout<<"Enter second number"<< std::endl;
    std::cin>>num2;
    switch (op) {
        case '+':
        std::cout<<"Your answer is:"<<num1+num2<< std::endl;
        break;
        case '-':
        std::cout<<"Your answer is: "<<num1-num2<< std::endl;
        break;
        case '*':
        std::cout<<"Your answer is: "<<num1*num2<< std::endl;
        break;
        case '/':
        if (num2==0){
            std::cout<<"Stupid, you can't divide by 0. Go learn math."<< std::endl;}
            else{
                std::cout<<"Your answer is: "<<num1/num2<< std::endl;}
            break;
            default:
            std::cout<<"Stupid, you can't do that. Go learn math."<< std::endl;
        }
    
    std::cout<<"******************************Calculator******************************"<< std::endl;

return 0;
}