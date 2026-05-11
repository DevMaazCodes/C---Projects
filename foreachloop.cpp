//a for each loop is a type of loop which eases the iteration of a data set, but it is less flexible as it starts from beginning and end at last.
#include <iostream>
int main(){
    int scores[]={23, 20, -12, 32, -21};
    for(int score:scores)//this is how to represent a foreach loop (datatype name of output:name of data set)
    {
        
        std::cout<<score<<'\n';
      
    }
    
   

 



    return 0;
}