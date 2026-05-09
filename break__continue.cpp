//break- this is for breaking out of a loop completely.
//continue- skip the current iteration, i.e skip the current output and generate the rest of loop.
#include <iostream>
int main(){

    for (int x=1; x<=10; x++){
     
     if (x==6){
        break;
     }
     std::cout<<x<<std::endl;
    }

   for (int y=1; y<=10; y++){
     
     if (y==6){
        continue;;
     }
     std::cout<<y<<std::endl;
    }



















    return 0;
}
