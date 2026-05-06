/*Typedef is like assigning a new name to an existing type.
 It does not create a new type, but rather gives an existing type a new name.
  This can be useful for improving code readability and making it easier to understand
   the purpose of a type.*/

   #include <iostream>
   int main(){
   using text_t=std::string;
   typedef std::string text_t; // this is the same as the above line
    text_t goal= "hitting ascendant in valorant";
     std::cout <<"my goal is "<<goal<<'\n';
    return 0;
   }

