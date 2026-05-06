#include <iostream>
//arithmetic operators are used to perform mathematical operations on variables and values.
int main(){
    int friends= 15;
    // one friend lost
    //friends= friends-1; the below 2 lines are the same as this line
    //friends--; 
    friends-=1; // this is the same as the above line
    //after losing one friend, we have 14 friends left, but now 2 more friends joined us.
    friends+=2;
    //one more friend joined us, so we have 17 friends now.
    friends++;
    //i need to give each friend 2 chocolates so number of chocolates i need to give is:
    int chocolates;
    //chocolates= friends*=2; // this is the same as chocolates= friends*2;
    //i need to divide my friends into 3 groups, so number of friends in each group is:
    //friends=friends/3; // this is the same as friends/=3; 
    /*when dividing we get 5 friends in each group, some friends are left. 
      let's find out how many friends are left after dividing into groups.
      for this we will use modulus operator (%) which gives us the remainder after division.*/
      int remainingfriends= friends%=3; // this is the same as remainingfriends= friends%3;
    std::cout<<remainingfriends;
    /*if there are multiple operations in a single expression, 
    the order of operations is determined by operator precedence.
    The higher precedence operators are evaluated first, 
    and if there are operators with the same precedence, they are evaluated from left to right.
    Precedence of operators can be changed using parentheses. 
    As parentheses have the highest precedence followed by mul/div/mod, then add/sub, and so on. 
    So, if there are parentheses in an expression,
    the expression inside the parentheses is evaluated first.*/
    return 0;
}