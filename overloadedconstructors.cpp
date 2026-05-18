//Overloaded constructors are all about giving your class flexibility. It just means having multiple constructors
// with the same name, but with different parameters allowing varying arguments to pass when initialising object.
#include <iostream>
class weapons{
   public:
   std::string name;
   int maxammo;
   int damage;
   weapons(std::string name, int maxammo, int damage){
    this-> name = name;
    this->maxammo=maxammo;
    this->damage=damage;
   }
   weapons(){
    name= "potty";
    maxammo= 0;
    damage= 69;
   } 
};
int main(){ 
    weapons w1;
    weapons w2("vandal", 25, 160);
    std::cout<<w1.name<<'\n';
    std::cout<<w1.maxammo<<'\n';
    std::cout<<w1.damage<<'\n';
    std::cout<<w2.name<<'\n';
    std::cout<<w2.maxammo<<'\n';
    std::cout<<w2.damage<<'\n';
    return 0;
}
