/*there are many useful string operations:
str.length(): this tells how many char are there in a string
str.empty():this tells if a string is empty
str.clear():this completely removes the string
str.find(x): finds the position of x char in string
strmain.append(str): adds a string str after our strmain.
str.at(x): finds the character at position x
str.erase(x, y): erases the characters from position x to y(not inclusive posi x and y)
str.insert(x, y): insert char/string x at position y*/
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