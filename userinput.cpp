//we will use std::cin>> and std::cout<< for input from user and output to user respectively.
#include <iostream>
typedef std::string str_t;
int main() {
str_t rank;
str_t username;
str_t main;
int level;

std::cout<<"What is your full username?"<<'\n';
std::getline(std::cin>>std::ws, username);
std::cout<<"What is your rank?"<<'\n';
std::cin>>rank;
std::cout<<"What is your level"<<'\n';
std::cin>>level;
std::cout<<"What is your main agent?"<<'\n';
std::getline(std::cin>>std::ws, main);


 //we ask the user for their username and store it in the variable string username.
//there is a problem if user input contains spaces, we have to use std::getline() instead of std::cin>>.
//std::cin>>username; //user input is stored in the variable username.


std::cout<<"Your username is "<<username<<'\n'; //we output the input from user to the user.
std::cout<<"Your rank is "<<rank<<'\n';
std::cout <<"Your level is "<<level<<'\n';
std::cout<<"Your main agent is "<<main<<'\n';


    return 0;
}