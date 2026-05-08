/* &&- This operator is used for checking two conditions,in maths we can do
 less than x greater than y but here we need to use && to get two conditions combined*/
//|| this is the or operator, use when we need to evaluate either of 2 conditions.
//! this reverses the logical state of operand.
#include <iostream>
#include <cmath>
int main(){
    double gpa;
    double testscore;
    bool disaction;
    std::cout<<"What is your GPA?"<<std::endl;
    std::cin>>gpa;
    std::cout<<"What are your test scores?"<<std::endl;
    std::cin>>testscore;
    std::cout<<"Do you have any discipinary action? If yes type 1 else type 0."<<'\n';
    std::cin>>disaction;
    if ((gpa>5||testscore>90) && !disaction){
        std::cout<<"Congrats, you got the scholarship";
    }
    else{
        std::cout<<"We are sorry, you are not eligible for the scholarship:(";
    }


    return 0;
} 