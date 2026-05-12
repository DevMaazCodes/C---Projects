#include <iostream>
int main(){
    std::string quiz[][1]={{"What color is the sun? A.Blue B.Yellow"},
                           {"What color is a white curtain? A.White B.67"},
                           {"Am I smart? A.Yes B.No"}};
    char answers[]={'B','B','A'};
    int size=sizeof(quiz)/sizeof(quiz[0]);
    char guess;
    
    int choice  ;
    do{
        int score=0;
        std::cout<<"************************************Quiz************************************"<<'\n';
    for(int i=0; i<size; i++){
        for (int j=0; j<1; j++){
            std::cout<<quiz[i][j]<<'\n';
            
           std::cin>>guess;
           
        }
        guess= toupper(guess);
        if(guess==answers[i]){
            std::cout<<"Correct"<<'\n';
            score++;
        }
        else{
            std::cout<<"Wrong"<<'\n';
    }
    }
    std::cout<<"**********************************Score time**********************************"<<'\n';
    std::cout<<"Your score is "<<score/double(size)*100<<'%'<<std::endl<<std::endl; 
     std::cout<<"If you want to exit type 4 else type any number: ";
     std::cin>>choice;
     if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');

     }
 } while (choice!=4);

    return 0;
}