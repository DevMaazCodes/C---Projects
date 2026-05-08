//a while loop is is like an if statement except until the condition is true the code keeps repeating itself in a loop.
#include <iostream>
#include <iomanip>
int main(){
    std::cout<<std::fixed<<std::setprecision(0);
 int maaz= 100;
 int daytrack=1;
 while (daytrack<=10){
    
     std::cout<<"The price of Maaz today is $"<<maaz<<std::endl;
     maaz+=10;
     daytrack+=1;



 }









    return 0;
}