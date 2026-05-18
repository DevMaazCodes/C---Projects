#include <iostream>
class item{
 private:
 int price=0;
 public:
 std::string name;
 void setprice(int price){
     if (price<=0){
        std::cout<<"Don't be delusional am keeping the price 0 now lmaooo"<<'\n';
     }
     else {
        this->price= price;
     }
 }
 
 int getprice(){
    return price;
 }
    

};
class weapon : public item{
  private:
  int damage=0;
  public:
  void setdamage(int damage){
       if (damage>0){
        this->damage=damage;
       }
       else{
        std::cout<<"Invalid input keeping default damage i.e 0"<<'\n';
       }
    }
  int getdamage(){
  
        return damage;
    
  }
  
  weapon(std::string name, int price, int damage){
        this->name=name;
        setprice(price);
        setdamage(damage);
}
void displaystats(){
    std::cout<<name<<'\n';
    std::cout<<getprice()<<'\n';
    std::cout<<getdamage()<<'\n';

}
};
int main(){
    weapon w1("Vandal", -2900, -40);
    w1.displaystats();


    return 0;
}