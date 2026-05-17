//a constructor is a function we initiate in class which will be called upon assigning name to our object in main.
//using this we can assign attributes as argument making it more efficient.
#include <iostream>
#include <iostream>
class player{
    public:
    std::string name;
    int health;
    std::string ability;

    void castability(){
        std::cout<<name<<" used "<<ability<<'\n';
    }
    //below is a constructor
        player(std::string name, int health, std::string ability ){ 
        this->name=name;
        this->health=health;
        this->ability=ability;
    }

    
};
int main(){
    player p1{"Phoenix", 100, "Flash"};
    player p2{"Jett", 150, "Dash"};
    std::cout<<p1.name<<'\n';
    std::cout<<p1.health<<'\n';
    std::cout<<p1.ability<<'\n';
    p1.castability();
    std::cout<<p2.name<<'\n';
    std::cout<<p2.health<<'\n';
    std::cout<<p2.ability<<'\n';
    p2.castability();

    return 0;
}