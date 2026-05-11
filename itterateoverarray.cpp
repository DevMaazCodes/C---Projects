//instead of manually typing the output for each element in an array we can simply use for loop to iterate over the array.
#include <iostream>
int main(){
    std::string agent[]={"Jett" ,  "Reyna","None", "Waylay","Astra","Clove"};
    for (int i=0; i<sizeof(agent)/sizeof(agent[0]); i++)/*we do this so that the elements are automatically calculated and in
                                                         future if we change elements or even the type of our array the code still works*/
    {
    std::cout<<agent[i]<<'\n'; //we do this so all the elements are output because i starts from 0 and increment by 1 so does our index of array.



    }
    






    return 0;
}
