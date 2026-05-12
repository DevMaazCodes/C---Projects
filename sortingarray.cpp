//for now we will use bubble sort for sorting algorithm. 
/*A bubble sort compares the value of one element to other and use a temporary variable to swap to sort arrays in order
for this we use nested loop, for ex we sort numbers in ascending order,
 the inner loop get it to move the largest number to the end once, while the outer wrap it all up to make sure nothing is left
 For our loop we need to use range till size-1 because the number will naturally get sorted  also it has nothing to compare with.*/
 #include <iostream>
 void sort(int array[], int size);
 int main(){
    int array[]= {10,7,8,9,6,4,5,2,3,1};
    int size= sizeof(array)/sizeof(array[0]);
    sort(array,size);
    for(int elements : array){
    std::cout<<elements<<std::endl;
    }

    return 0;
 }
 void sort(int array[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
        if(array[j]>array[j+1]){
        temp= array [j];
        array [j]=array[j+1];
        array[j+1]=temp;}
     
        
     }
    }

    


 }