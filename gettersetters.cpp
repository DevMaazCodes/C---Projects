/*Getter (Accessor method): A public function used to safely read the value of a private attribute. 
It usually has a return type matching the variable and takes no arguments (e.g., int getDamage()).

Setter (Mutator method): A public function used to safely modify the value of a private attribute.
It takes a parameter and usually contains validation logic (like if statements) to make sure the new data
is valid before saving it (e.g., void setDamage(int d)). 

These can be invoked inside constructor as well                                                         */
#include <iostream>
class weapon{
   private:
   std::string name;
   int damage=0;
   public:
   void setname(std::string name){
      this->name=name;
   }
   std::string getname(){
    return name;
   }
   void setdamage(int damage){
      if (damage>0){
         this-> damage= damage;
      }
      else {
         std::cout<<"Invalid damage input"<<'\n';
      }

   }
      int getdamage(){
      return damage;
      }
   weapon(std::string name, int damage){
      setname(name);
      setdamage(damage);
   }
};
int main(){
    weapon w1("vandal",56);
    std::cout<<w1.getname()<<'\n'<<w1.getdamage();
    return 0;
}