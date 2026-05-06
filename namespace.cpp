/*a namespace provides a solution for name conflicts in large projects. 
Each entity needs a unique name. A name space allows identically named entities to coexist,
 as long as they are in different namespaces. */  
#include <iostream>
 namespace first {
    double r=67.8;
 }
 namespace second {
    double r= 12.67;
 }

 const double pi= 3.14159;

 double areaofcircle;


int main(){
 using namespace first;

 areaofcircle= pi*r*r;

std::cout <<areaofcircle<<std::endl;

using namespace second;

areaofcircle= pi*second::r*second::r;

std::cout <<areaofcircle<<'\n';

}