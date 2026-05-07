/*Type conversion is to convert one data type to another data type.
 There are two types of type conversion in C++: 
 implicit type conversion and explicit type conversion. Implicit=automatic
 explicit=manual*/
 #include <iostream>
 int main(){
    // Implicit type conversion
    char c= 100; //since char can only hold single char, 100 is implicitly converted to d.
    std::cout<<c;
    // Explicit type conversion
    double y= 4.67;
    int z= (int)y/4; //i coverted y with (int) to explicitly convert it to an integer before performing the division.
    std::cout<<z;
//common problem
    int score= 20;
    int total= 100;
    double final= (double)score/(double)total;
    std::cout<<final; /*this will output 0 because score and total are both integers,
     so the division will be performed as integer division, which truncates the decimal part.
      To get the correct result, we can explicitly convert either/both 
      score or/and total to a double before performing the division.*/
    return 0;
 }