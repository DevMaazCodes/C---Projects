//Inheritance allows us to create a new class (a child) that automatically adopts all the attributes and
//methods of an existing class (a parent). This stops us from having to copy-paste code across different
//classes that share similar traits.
#include<iostream>
class agent{
  public:
  std::string name;
  int health;
  void walk(){
    std::cout<<name<<" is walking"<<'\n';
  } 
};
class duelist : public agent{
    public:
    int kill;
    void entry(){
        std::cout<<name<<" is entry fragging"<<'\n';
    }
    duelist(std::string name, int health, int kill){
        this ->name=name;
        this ->health=health;
        this ->kill=kill;
    }
  };
  int main(){

    duelist p1("Pheonix", 100, 5);
    std::cout<<p1.name<<'\n'<<p1.health<<'\n'<<p1.kill<<'\n';
    p1.walk();
    p1.entry();



    return 0;
  }