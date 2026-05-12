#include <iostream>
void findagent(std::string team[], int size, std::string search);
int main(){
    
    std::string team[]={"Jett", "Reyna", "Clove", "Cypher", "Fade"};
    
    int size= sizeof(team)/sizeof(team[0]);
    std::cout<<"***************************************************Team Verifier***************************************************"<<'\n';
    std::string search;
    std::cout<<"Enter your agent to confirm if it's in the team: ";
    std::getline(std::cin, search);
    findagent(team, size, search);
   


    return 0;
}

void findagent(std::string team[],int size, std::string search){

 bool found= false;
    for (int i=0; i<size; i++){
        if (search==team[i]){
            std::cout<<"Your agent is at no. "<<i+1;
            found=true;
            break;
        }
       
    }
    if (!found){
        std::cout<<"Your agent not in the team.";
    }



    
}