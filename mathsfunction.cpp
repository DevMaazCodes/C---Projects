#include <iostream>
#include <cmath>
using db_t=double;
int main(){
  db_t x= 6.7;
  db_t y= 3.2;
  db_t n= -6;
  db_t t;
  //t= std::max(x,y);  this will return the maximum between x and y
  //t= std::min(x,y); this will return the minimum between x and y
  //t= pow(x,y);  this will return x raised to the power of y
  //t=sqrt(x);   this will return the square root of x
  //t= abs(n);    this will return the absolute value of n i.e the positive value of n
  //t= round(x);  this will return the nearest integer to x
  //t= round (y);  this will return the nearest integer to y i.e 3
  //t= floor(x);   this will return the largest integer less than or equal to x i.e 6 (round down)
  t= ceil(y);    //this will return the smallest integer greater than or equal to y i.e 4 (round up)
  std::cout<<t; 


  
  



    return 0;
}
