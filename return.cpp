//the return keyword returns the value back to the spot where we called the encompassing function.
//for this we need to change the return type from void to the data type of which the value is returned. ex- int age(){return num1+num2;}
#include <iostream>
#include <ctime>
 #include <string>
double combatscore(){

double score= (rand()%400)+100;
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
  double score=  combatscore();
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