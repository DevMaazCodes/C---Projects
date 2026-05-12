/*we can pass the array to a function by our usual method but when adding the argument in main we avoid the [] but in function declaration
and definition we include [] with data type and name. Also when an array passes to a function it converts to a pointer (this is called decay)
 so the function does not know how many elements array has so it can't calculate it's size, so we have to pass size manually from main.*/
#include <iostream>
double calculatetotal(double balance[],int size);
int main(){
    double balance []= {2.43, 4.56, 7.8, 6.9, 6.7};
    int size=sizeof(balance)/sizeof(balance[0]);
    double total= calculatetotal(balance, size);
    std::cout<<total;




    return 0;
}
double calculatetotal(double balance[],int size){
  double total=0;
   //for (int i=0; i<sizeof(balance/sizeof(balance[0]); i++), we can't do this due to decay problem so we pass size too
  for (int i=0; i<size; i++)
   
  {
    
    total+=balance[i];


  }
  return total;
}

