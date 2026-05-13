#include <iostream>
#include <ctime>
void printboard(const char *spaces){
std::cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
std::cout<<"  "<<spaces[0]<<"  "<<"|"<<"  "<<spaces[1]<<"  "<<"|"<<"  "<<spaces[2]<<"   "<<'\n';
std::cout<<"_____|_____"<<"|_____"<<'\n';
std::cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
std::cout<<"  "<<spaces[3]<<"  "<<"|"<<"  "<<spaces[4]<<"  "<<"|"<<"  "<<spaces[5]<<"   "<<'\n';
std::cout<<"_____|_____"<<"|_____"<<'\n';
std::cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
std::cout<<"  "<<spaces[6]<<"  "<<"|"<<"  "<<spaces[7]<<"  "<<"|"<<"  "<<spaces[8]<<"   "<<'\n';
std::cout<<"     |     "<<"|     "<<'\n'<<'\n';
} 
void playermove(char *spaces, const char player){
   int num;
   do{
   std::cout<<"Write a number from 1-9 to fill your mark at the spot between 1-9: ";
   std::cin>>num;
   num--;
   if(std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout<<"Please write a valid number"<<'\n';
      continue;
   }
   if (num<0||num>8){
    std::cout<<"Please write a valid input"<<'\n';
    continue;
   }
  
   if (spaces[num] == ' '){
    spaces[num]=player;
    break;}
   else{
    std::cout<<"The chosen slot is already occupied"<<'\n';
    continue;
    } }while(true);
   }
void compmove(char *spaces, const char comp){
    int num;
    do{
         num= rand()%9;
         if (spaces[num] == ' '){
         spaces[num]=comp;
         break;
        }
         
    }while(true);
        
   
   }
bool checkwinner( char *spaces,  char player,  char comp){
    if ((spaces[0]!=' ')&&spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
        spaces[0]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
    else if ((spaces[3]!=' ')&&spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
        spaces[3]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
    else if  ((spaces[6]!=' ')&&spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
        spaces[6]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
    else if  ((spaces[0]!=' ')&&spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
        spaces[0]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
     else if  ((spaces[2]!=' ')&&spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
        spaces[2]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
     else if  ((spaces[1]!=' ')&&spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
        spaces[1]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
     else if  ((spaces[0]!=' ')&&spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
        spaces[0]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
     }
      else if  ((spaces[2]!=' ')&&spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
        spaces[2]== player ? std::cout<<"You win"<<'\n': std::cout<<"You lost"<<'\n';
        return false;
    }
    else{
        return true;
    }
    
    
}
bool checktie(char *spaces){
    if (spaces[0]!=' '&&spaces[1]!=' '&&spaces[2]!=' '&&spaces[3]!=' '&&spaces[4]!=' '&&spaces[5]!=' '&&spaces[6]!=' '&&spaces[7]!=' '&&spaces[8]!=' '){
        std::cout<<"It's a tie"<<'\n';
        return false;
    }
    else {
        return true;
    }
}
int main(){
   srand (time(NULL));
   char spaces[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
   char player= 'X';
   char comp='O';
   bool running=true;
   printboard(spaces);
   while(running){
   playermove(spaces, player);
   if(!checkwinner(spaces,player,comp)){
     running=false;
     printboard(spaces);
     break;
   }
   else if (!checktie(spaces)){
     running=false;
     printboard(spaces);
     break;
   }
   compmove(spaces, comp);
   printboard(spaces);
    if(!checkwinner(spaces,player,comp)&&running){
     running=false;
     break;
   }
    else if (!checktie(spaces)){
     running=false;
     break;
   }
}
    return 0;
}