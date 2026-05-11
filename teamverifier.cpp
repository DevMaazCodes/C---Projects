#include <iostream>
int main(){
    
    std::string team[]={"Jett", "Reyna", "Clove", "Cypher", "Fade"};
    std::string search;
    std::cout<<"***************************************************Team Verifier***************************************************"<<'\n';
    std::cout<<"Enter your agent to confirm if it's in the team: ";
    std::getline(std::cin, search);
    
    bool found= false;
    for (int i=0; i<sizeof(team)/sizeof(team[0]); i++){
        if (search==team[i]){
            std::cout<<"Your agent is at no. "<<i+1;
            found=true;
            break;
        }
       
    }
    if (!found){
        std::cout<<"Your agent not in the team.";
    }



    return 0;
}