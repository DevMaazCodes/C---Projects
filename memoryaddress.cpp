//a variable is a container of data but the variable is stored inside memory and every variable has it's own address in the memory
//we can find this memory address using &variablename. This & is known as the adress of memory operator.
#include <iostream>
int main(){
    int x=65;
    std::string words ="Sixty five";
    char a= '&';
    bool sixtyfive= true;
    std::cout<<&x<<'\n';
    std::cout<<&words<<'\n';
    std::cout<<&sixtyfive<<'\n';
    std::cout<<&a<<'\n'; //this prints gibberish idk why till now
    return 0;
}
