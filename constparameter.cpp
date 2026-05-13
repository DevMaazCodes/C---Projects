//we can use the const keyword for making the parametres of our user defined functions read only,
//this secures our code and conveys intent to others about not changing the values
//this is useful for pass by ref. because we don't want the called function to change variable values in our main function
//this is also helpful in pointers.
#include <iostream>
void output(const std::string &name, const int &age);
int main(){
    std::string name= "Maaz";
    int age= 18;
    output(name, age);
    return 0;
}
/*void output(std::string &name, int &age){
    name= " "; //this is problem we don't want to output this we want no changes in name and age from main function so we const now.
    age= -5;
    std::cout<<"I am "<<name<<" and I am "<<age<<" years old";
}*/
void output(const std::string &name, const int &age){
    //name= " "; //now even if we try it doesn't output shows error
    //age= -5;
    std::cout<<"I am "<<name<<" and I am "<<age<<" years old";
}