//fill(), this function fill a range of element with a specified value, there are 3 arguments in it, fill(begin, end, value)
#include <iostream>
int main(){
    int x=9;
    std::string quality[x];
    fill(quality, quality+x/3, "I'm stupid");
     fill(quality+x/3, quality+(2*x)/3, "I'm lazy");
      fill(quality+(2*x)/3, quality+x, "I love coding");
    for(int i=0; i<sizeof(quality)/sizeof(quality[0]); i++){
        std::cout<<quality[i]<<std::endl;
    }
}