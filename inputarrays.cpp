//till now we were defining the array now we will take user input using for loop and handle some edge cases.
#include <iostream>
int main(){
    const int size= 5;
    std::string temp;
    std::string entries[size];
    for(int i=0; i<size; i++){
        std::cout<<"Write your entry no."<<i+1<<" or write q to quit"<<" : ";
        std::getline(std::cin>>std::ws, temp);
        if(temp =="q"){
            break;
        }
        else{
            entries[i]=temp;
        }
    }
    std::cout<<"*********************************************Entries*********************************************"<<'\n';
    for(int j=0; j<size&&!entries[j].empty(); j++){
        std::cout<<"Your entry number #"<<j+1<<" is "<<entries[j]<<'\n';
    }
    return 0;
}
