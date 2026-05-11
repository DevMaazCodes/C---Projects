//size of() tells the size of our variable, data types, class,objects in bytes, our vareiable comes in ().
#include <iostream>
int main(){
    std::string name="today";
    int aroma= 67333333; //no matter the length of ineteger or a string the size remains same
    std::string potty[]={"aroma","bigboii","stupid guy","i am small"};
     /*a size of string is the sum of total elements in it,
     like we have 5 elements in this string the total size would be the size of 5 strings*/
    std::cout<<sizeof(potty)/sizeof(potty[0]); /*we can do this to find the no. of element in this string array, 
    alternatively we could also divide by the sizeof(std::string)*/





    return 0;
}
