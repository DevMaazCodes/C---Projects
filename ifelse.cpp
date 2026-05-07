//if statements are used to do something if a condition is true, if not dont do it.
//when we need to give an output when if condition is false we can use else statement.
//if we need to check multiple conditions we can use else if statement.
#include <iostream>
int main(){
    int rank;
    std::cout<<"Enter your rank"<<'\n';
    std::cin >> rank;

    if(rank==1){
        std::cout<<"You are the legend";
    }
    else if(rank<=500){
        std::cout<<"You reached radiant";
    }
    else if(rank<=1000){
        std::cout<<"You are very close, keep it up";
    }
    else {
        std::cout<<"You need to work harder";
    }



    return 0;
}