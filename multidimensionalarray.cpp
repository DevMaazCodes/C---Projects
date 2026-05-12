//a multidimensional array is an array where each element is an array itself, all these elements aka arrays will be enclosed in {}.
//in front of variable name now we will have 2 [], representing rows and coloumns respectively. To define we need to assign coloumns atleast.
//to access one element inside array we need to specify row and coloumn both starting from 0 like index.
//to iterate over it we can use nested loops.
#include <iostream>
int main(){
    int nums[][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
                      
    
    //std::cout<<nums[1][2];
    //iterating over it
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            std::cout<<nums[i][j]<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}