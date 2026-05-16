//enums are a user defined data type that has a name paired to ineteger, this ise useful when we have set of options
//and we need to use them. If we dont manually assign the value to our names it will implicitly be assigned from 0.
//we need to declare enums outsdide main and define them. 
#include <iostream>
enum weapontype {Rifle, Sniper, Pistol, SMG, LMG};
int main(){
    weapontype weapon= SMG;
    switch (weapon){
        case Rifle: std::cout<<"It is a vandal or phantom"<<'\n'; break;
        case Sniper: std::cout<<"It is an op or outlaw or marshal"<<'\n'; break;
        case Pistol: std::cout<<"It is a pistol"<<'\n'; break;
        case SMG: std::cout<<"It is a stinger or spectre"<<'\n'; break;
        case LMG: std::cout<<"It is an odin or ares"<<'\n'; break;
        default: std::cout<<"You are noob"<<'\n'; break;
    }


    return 0;
}
