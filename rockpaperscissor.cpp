#include <iostream>
#include <ctime>
char userchoice();
char compchoice();
void showchoice(char user, char comp);
void choosewinner(char user, char comp);
int main(){
    srand(time(NULL));
    int exit;
    std::cout<<"****************************************************Rock Paper Scissors****************************************************"<<'\n';
     do{char user= userchoice();
     char comp=compchoice();
     showchoice(user,  comp);
     choosewinner( user,  comp);
     std::cout<<"If you want to exit type 4 else type anything"<<std::endl<<"Type: ";
     std::cin>>exit;
      if (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
     } while(exit!=4);

    return 0;
}
char userchoice(){
     char userchoice;
     do{
    std::cout<<"Select your choice:"<<'\n'<<"R. Rock"<<'\n'<<"P. Paper"<<'\n'<<"S. Scissors"<<'\n'<<"Your choice: ";
    std::cin>>userchoice;
    if (userchoice==('r')||userchoice==('p')||userchoice==('s')){
        return userchoice;
    }
   else{
    if (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
         std::cout<<"Please enter r or p or s in lowercase";
    }
    else{
    std::cout<<"Please enter r or p or s in lowercase"<<std::endl;}     
}} while(true);
}

char compchoice(){
     char compchoice= rand()%3;
     switch (compchoice){
        case 0:
        return 'r';
        break;
        case 1:
        return 'p';
        break;
        case 2:
        return 's';
        break;
        default:
        return 'r';
     }
}
void showchoice(char user, char comp){
     std::cout<<"You chose "<< user<<" and "<<"computer chose "<<comp<<std::endl;
}
void choosewinner(char user, char comp){
    if ((user=='r' && comp=='s')||(user=='p' && comp=='r')||(user=='s' && comp=='p')){
        std::cout<<"You won"<<std::endl;
    }
    else if((user=='r' && comp=='r')||(user=='p' && comp=='p')||(user=='s' && comp=='s')){
        std::cout<<"It's a draw"<<std::endl;
    }
    else{
        std::cout<<"You lose"<<std::endl;
    }
}