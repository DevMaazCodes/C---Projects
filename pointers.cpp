// a pointer is a variable that stores the memory address of another variable, it's sometimes easier to work with address
// where pointer is useful. To write a pointer we can use the dereferance operator(*) and the pointer variable should be of the same type
//as the variable of which the address will be stored, if we access the pointer name with * we get the value of our variable and without
//* we get the memory address of our variable.
#include <iostream>
int main(){
    int x=6;
    int y[]={3,4,5,6,7,8,9,10};
    int *X= &x;
    int *Y= y; //we can't do this because an array is already a pointer.
    std::cout<<Y;
}