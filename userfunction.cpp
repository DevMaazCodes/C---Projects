//function is a block of reusable block
#include <iostream>
void guy(std::string huge, int six);






int main(){
int x=67;
std::string large= "big";


guy(large, x);

    return 0;
}

void guy(std::string huge, int six){ /*a function can't know what's going on in another function, we need to tell the function by invoking in the () 
    in the function declaration and definition and in the () of main function. We dont have to write the same string name in function ()
    but we have to be accurate inside the main function. We can do it for multiple data seperated by commas.*/
    //we can define the function after main function but we need to declare it before main so compiler has access to it
     //this can only be done to functions not data inside function.    

std::cout<<"he is a " <<huge<<" "<<six << " guy"<<std::endl;
}