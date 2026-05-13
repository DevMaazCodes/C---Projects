//a nullptr keyword is used to assign a pointer no value as the term null suggests something having no value.
//we use this when we need to assign the pointer value later as if we not use this the pointer will point to a garbage value
//as a result the output will have undefined behaviour, we should use if-else to confirm before dererencing pointer whether the 
//pointer has a value or not because calling a nullptr or a pointer pointing at garbage value is not good as it causes undefined behaviour.
#include <iostream>
 int main(){
    //int *pointer; we should not do this as now this is pointing at garbage
    int *pointer=nullptr;  //we should do this
    int x=45678;
    pointer= &x;
    if (pointer !=nullptr){
        std::cout<<*pointer;
    }
    else{
        std::cout<<"Pointer not assigned";
    }
 

    return 0;
 }