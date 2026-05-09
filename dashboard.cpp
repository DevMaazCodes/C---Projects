#include <iostream>
#include <ctime>
void showmenu(){

std::cout<<"Choose what you want to do:"<<std::endl <<"1.Play Game"<<std::endl <<"2.Draw pattern"<<std::endl <<"3:Check my goal"<<std::endl <<"4.Exit"<<std::endl<<"Your answer: ";

}
void playgame(){
    
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
            std::cout<<"Congrats, you won"<<std::endl<<std::endl;
        }
        else{
            std::cout<<"Better luck next time:)"<<std::endl<<std::endl;
        }
}
void drawpattern(){
    for (int i=5; i>=0; i--){
      
       for (int row=1; row<=i; row++){
      std::cout<<'*';
    }
      
    std::cout<<std::endl;
}}
void checkgoal(){
   std::cout<<"Goal: I want to become a web developer"<<std::endl<<"Status: In progress"<<std::endl<<std::endl;
}
int main(){
    srand(time(NULL));
    int choice;
    std::cout<<"*************************************************************Maaz's Hub*************************************************************"<<std::endl;
    do{
    showmenu();
    std::cin>>choice;
    if (std::cin.fail()) {
    std::cin.clear(); // Resets the error flag so cin can breathe again
    std::cin.ignore(1000, '\n'); // Flushes the "stuck" word out of the buffer
    std::cout << "Invalid input! Please enter a number." << std::endl;
    continue; // Skips the rest of the loop and starts fresh
    }
    switch (choice){
        case 1:
        playgame();
        break;
        case 2:
        drawpattern();
        break;
        case 3:
        checkgoal();
        break;
        case 4:
        std::cout<<"Thank you for interacting"<<std::endl;
        break;
        default:{
            std::cout<<"Please enter 1-4."<<std::endl<<std::endl;
        }


    }
       } while(choice!=4);


    return 0;
}