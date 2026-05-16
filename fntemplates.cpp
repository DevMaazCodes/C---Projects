//a function template is a way to use same function as multiple overloaded functions. for this we have to create
// a template by using: template<typename T, typename U>, here we assigned two templates T and U. We can assign as many
//we want. Multiple templates are useful when input has mixed range of data types, because in one compilation a 
//single template can only represent a single data type. We can use auto as return type if we don't know the return type.
#include <iostream>
template <typename T, typename U>
void print(T count, U item){
    std::cout<<count<<" "<<item;
}
int main(){
    
    print(3, "six seven");


    return 0;
}