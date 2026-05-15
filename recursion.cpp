//recursion is a tehnique where a function calls itself from within itself. It's similar to iteration via for loop, in
//the repeating manner but it's cleaner as it involves less code. The main disadvantage is it's slower and requires more
// memory compared to for loop. Recursion is very useful for sorting and searching.
#include <iostream>
void draw(const int n){
   if(n>=1){
    std::cout<<'#'<<'\n'; draw(n-1);
   }
}
int main(){
    int n=7;
    draw(n);

    return 0;
}