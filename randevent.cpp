// we can generate events randomly based on the random numbers using a logic like if-else or switch
#include <iostream>
#include <ctime>
int main(){
    srand(time(NULL));
    int x= (rand()%5) + 1;
    int y;
    int tries=1;
    
   
    do  {
        std::cout<<"guess your number between 1-5: ";
        std::cin>>y;
        if(y!=x){
            std::cout<<"try again"<<std::endl;
        }
      tries+=1;
    }while (y!=x && tries<=3);

        
    
    
    if(y==x){
            std::cout<<"Congrats, you won"<<std::endl;
        }
        else{
            std::cout<<"Better luck next time:)"<<std::endl;
        }

















    return 0;
}