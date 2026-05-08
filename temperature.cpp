#include <iostream>
#include <iomanip>
int main(){
    std::cout<<std::fixed<<std::setprecision(2);
    double temp;
    char unit;
    std::cout<<"******************************************Temp Converter (c>f)******************************************"<<std::endl;
    std::cout<<"Write the temperature: ";
    std::cin>>temp;
    std::cout<<"Write the current unit: ";
    std::cin>>unit;
    switch (unit){
        case 'C':
        case 'c':
        std::cout<<"Temperature in farenheit: "<<((temp*1.8)+32);
        break;

        case 'F':
        std::cout<<"Temperature in celsius: "<<((temp-32)/1.8);
        break;

        default:
     std::cout<<"Please write a valid input";
    }

    

    return 0;
}