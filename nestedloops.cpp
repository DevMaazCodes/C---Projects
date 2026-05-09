//nested loop is a loop inside a loop
#include <iostream>
int main(){
    int rows;
    int coloumns;
    char symbol;
    std::cout<<"how many rows?"<<std::endl;
    std::cin>>rows;
    std::cout<<"how many coloumns?"<<std::endl;
    std::cin>>coloumns;
    std::cout<<"what symbol?"<<std::endl;
    std::cin>>symbol;
    for (int c=1; c<=coloumns; c++){
        for (int r=1; r<=rows; r++){
            std::cout<<symbol;
      }
      
      std::cout<<'\n';


    }


  

















    return 0;
}