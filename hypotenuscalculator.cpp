#include <iostream>
#include <cmath>
using db=double;
int main(){
    db a;
    db b;
    db c;
    std::cout<<"what is the length of height (a) in your triangle?"<<'\n';
    std::cin>>a;
    std::cout<<"what is the length of base(b) in your triangle?"<<'\n';
    std::cin>>b;
    c= sqrt(pow(a,2)+pow(b,2));
    std::cout<<"the length of hypotenus is " <<c;

    return 0;
}