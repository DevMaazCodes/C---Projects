//a struct is a structure which can hold multiple variable of different data type in a group under one name.
//the variable in struct are called members and are accessed by . aka class member access operator.
//we can make struct outside main() and define in main()
#include <iostream>
struct task{
  std::string nametask;
  int level;
  bool completed;
};
int main(){
    task task1;
    task1.nametask="study";
    task1.level=5;
    task1.completed=false;
    std::cout<<task1.nametask<<'\n'<< task1.level<<'\n'<<task1.completed;
    return 0;
}