#include <iostream>
#include <bits/stdc++.h>
int main() {
    std::string name;
    std::cout<<"What is your full name?"<<'\n';
    std::getline(std::cin, name);
    int space_pos= name.find(' ');
    if ( name.empty()){
        std::cout<<"Please enter a valid name";
     }

      
     else if(name.length()>10 || name.length()<=10){
        name.erase(10, std::string::npos);
        std::cout<<"Hello " <<name.insert(0, "Mr./Mrs " )<<'\n';
       std::cout<<"The space in your name is at the position "<<space_pos;

     }

     
         



    return 0;
}