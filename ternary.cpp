//ternary operator is a simple way to write an if-else statement in a single line of code. 
//It is represented by the symbol "?" and ":".
#include <iostream>
#include <cmath>
//for integer
int main(){
   /* int rank;
    std::cout<<"What is your rank on the leaderboard?"<<std::endl;
    std::cin>>rank;

    rank<=500? std::cout<<"You are radiant!!!" : std::cout<<"You are a noob";*/

    //for boolean:
    bool radiant;
    std::cout<<"Are you radiant? (if yes, type 1 otherwise type 0)"<<std::endl;
    std::cin>>radiant;
    
    //we can also assign the result of the ternary operator to a variable,
    // which is useful when we want to use the result later in the code.
    std::string level= radiant? "You are radiant!!!" : "You are a noob";

    std::cout<<"Let me tell you, ";

    std::cout<<level<<std::endl;

    


    return 0;
}