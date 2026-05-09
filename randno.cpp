//we can generate pseudo random numbers in c++, pseudo means they are closely random but not exactly random.
//we need include ctime to use the time operation. we need to put the time seed in srand function.
#include<iostream>
#include <ctime>
//putting seed in srand
int main(){
    srand(time(0));
    int num= (rand()% 6) + 1; //we are doing %6 to limit the no. to 12345 and plus 1 to include 6 as well.
    std::cout<<num;











    return 0;
}


