//functions can have same name but different fucntion signature. 
//Function signature is a function name + parameter, so we can change parameter of a function and make it even if it shares name with a function.
#include <iostream>
#include <iostream>
#include <ctime>
 #include <string>
double combatscore(){

double score= (rand()%400)+100;
return score;  
}
double combatscore(int maxvalue){
    double score= (rand()%(maxvalue-100))+100;
    return score;
}
std::string rank(double score){
    
    if (score<=500 && score>=400){
        return  "Radiant/Immortal/Ascendant";
    }
    else if (score<400 && score>=300){
        return "Diamond/Platinum/Gold";
    }
    else {
        return "Silver/Bronze/Iron";
    }
}
int main(){
  srand (time(NULL));
  int maxvalue= 200;
  double score=  combatscore(maxvalue);
   std::string level= rank(score);
   std::cout<<"Combat Score= "<<score<<std::endl;
   std::cout<<"Rank: "<<level<<std::endl;
   if (level == "Radiant/Immortal/Ascendant" ){
    std::cout<<"300 LPA";
   }
   else if (level == "Diamond/Platinum/Gold"){
    std::cout<<"30 LPA";
   }
   else {
    std::cout<<"3 LPA";
   }
    return 0;
} 