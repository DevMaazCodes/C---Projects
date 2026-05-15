#include <iostream>
int power( int base, int expo){
    if(expo<=0) {
       return 1;
    } 
         return base*power(base, expo-1);
   
}
int main(){
     int base;
     int exponent;
     std::cout<<"Write the base value of your exponent: ";
     std::cin>>base;
     std::cout<<"Write the value of the power of your exponent: ";
     std::cin>>exponent;
     int result=power( base, exponent);
     std::cout<<result;
    return 0;
}