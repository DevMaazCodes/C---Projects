/* There are 2 types of scope for a variable
 #1 Local variable- When we define and declare a variable inside a function (){ },
 this variable is only accessible to the function it is contained in and not the other functions. 
 This is why we can have 2 variable of same type and name inside different function and they do not overlap.
 #2 Global Variable- This is when we define a varible outside of all the functions
  and this variable is accessible to all the functions in the programme. 
  But if we have a local and global variable of same type and name the function will prioritize the local variable, 
  so in order to use the global variable in this case we have to use ::variable,
  this will explicitly tell the function to use global variable 
  #3 Block scope- These are variable inside a loop or conditional statement, they die as soon as loop finishes or condition is false */
  #include <iostream>
  int health= 100;
  void hp(){
    int health= 0;

  }
  int main(){
  //   if(1==1){
   //     int x=1;
  //   }
  //health= 50;
    hp();
     std::cout<<health;
    return 0;
  }