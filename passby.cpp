//we can pass a variable from one function to other by 2 means.
//first is pass by value and the other is pass by referenece.
//pass by value is what we were doing till now, directly passing the variable by it's type and name, the issue
//is when we pass by value, the computer makes a local copy of the variable value and the 2nd function is dealing with that value
//which means any alteration to the value in 2nd function won't affect the value of the variable in 1st function as they have different memory address.
//in pass by reference we pass the memory address in function declaration and definition though in first function the argument of 
//the called function contains only the name, by this we pass the memory address to the 2nd function making the 2nd function 
//have access over the variable in first function. This happens because the 2nd function is altering the variable at the given memory address
//which is same in both functions therfore change in one place would affect values in both functions.
//Pass by value case: 
/*#include <iostream>
void test(int x);
int main(){
    int x=7;
    test(x);
    std::cout<<x;  the output is 7 only because void altered the value of the copy of x not the x in main function
return 0;
}
void test(int x){
     x=9;

}*/
//Pass by reference
#include <iostream>
void test(int &x);
int main(){
    int x=7;
    test(x);
    std::cout<<x;  //the output is 9 because test function altered the value in main, this is why we should use pass by ref more often
return 0;
}
void test(int &x){
     x=9;

}