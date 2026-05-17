//an object is a collection of attributes and methods, and are created using classes which act as blueprint. 
//a structt has only attributions but a class can have functions inside aka methods. We can appoint these members
//and methods as public to access them using . in main function just like structs.
#include <iostream>
class player{
    public:
    std::string name;
    int health;
    std::string ability;

    void castability(){
        std::cout<<name<<" used "<<ability<<'\n';
    }
};
int main(){
    player p1;
    p1.name="Phoenix";
    p1.health= 100;
    p1.ability= "Flash";
    std::cout<<p1.name<<'\n';
    std::cout<<p1.health<<'\n';
    std::cout<<p1.ability<<'\n';
    p1.castability();
    return 0;
}