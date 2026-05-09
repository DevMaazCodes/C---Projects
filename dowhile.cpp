//do while loop is a loop where code runs first then condition is checked.
#include <iostream>
int main(){
    int pass;
    int attempt=1;
    do{
        std::cout<<"enter your pass: ";
        std::cin>>pass;
       
       if(pass!=1234&&attempt<3){
         std::cout<<"wrong, try again"<<'\n';
        }
        
        else if (pass==1234){
         std::cout<<"correct"<<'\n';
        }
       attempt+=1;
    }while(pass!=1234&&attempt<=3);

    if (pass!=1234){
            std::cout<<"Access denied too many attemps"<<'\n';
        }










    return 0;
}