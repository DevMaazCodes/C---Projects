/*a switch is used as an alternative to if-else statements 
when we have to check for multiple specific conditions based on the value of a single variable.*/
// It is more efficient and easier to read than multiple if-else statements.
#include <iostream>
#include <cmath>
int main(){
    std::string less = "get lost";
    int agent;
    std::cout<<"enter your agent number"<<'\n'<<"1: Jett"<<'\n'<<"2: Pheonix"<< std::endl 
    <<"3- Reyna"<< std::endl <<"4- Clove"<< std::endl <<"5- Sage"<< '\n' <<"Answer-";
    std::cin>>agent;

    switch (agent){
        case 1:
        std::cout<<"You are Jett";
        break;
        case 2:
        std::cout<<"You are Pheonix";
        break;
        case 3:
        std::cout<<"You are Reyna";
        break;
        case 4:
        std::cout<<"You are Clove";
        break;
        case 5:
        std::cout<<"You are Sage";
        break;

        default:
        std::cout<<"Quit valo if you want another agent, if you want to play write 1-5 or, " << less;

    }
 return 0;
}