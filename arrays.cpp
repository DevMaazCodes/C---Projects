//array is a data structure to have multiple values of a data type. It is represented by [] in front of the variable name, ex int x[].
//The values in array is represented by {}, each value has an index no. starting from 0 for first 1 for second and so on
//we can assign values to array later only if we declare its size i.e no. of values it can hold within [] brackets. ex int x[5];
#include <iostream>
int main(){
    //std::string agent[]={"Jett", "Reyna", "Waylay"};
    std::string agent[3];
    agent [0]= "Jett"; //you can assign later too
    agent [1]=  "Reyna";
    agent [2]= "None"; //you can reassign value too, but array should have same data type
    std::cout<<agent[1]<<'\n'<<agent [0]<<'\n'<<agent [2];
    




    return 0;
}