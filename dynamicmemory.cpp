//dynamic memory is memory allocated while the code is compiled and running unlike previous stack memory which
//which is already allocated before running. To assign memory to something we can use the new operator. We store in heap.
//for evry new operator we need to use the delete operator, because it deletes the space after we done using it.
//This is useful when we dont know how much memory we will need for ex user input.

#include <iostream>
int main(){
   int *pSize= nullptr;
   pSize= new int;
   std::cout<<"How many items you want to enter: ";
   std::cin>>*pSize;
   std::string *items=nullptr;
   items= new std::string[*pSize];
   for(int i=0; i<*pSize; i++){
    std::cout<<"Enter your item #"<<(i+1)<<": ";
    std::cin>>items[i];
   }
    for(int j=0; j<*pSize; j++){
        std::cout<<items[j]<<std::endl;
    }
    delete pSize;
    delete[] items;
    return 0;

}