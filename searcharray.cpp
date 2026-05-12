//we can search a element in array by iterating over it and finding if our desired value matches any element. We can use if else for it.
//we can output -1 if nothing is found as -1 means !found in cs.
#include <iostream>
int findtopic(std::string topic[], std::string mytopic, int size);
int main(){
    std::string topic[]= {"variable", "data type", "logic", "loops", "function", "arrays"};
    int size= sizeof(topic)/sizeof(topic[0]);
    std::string mytopic;
    std::cout<<"Write your topic to check: ";
    std::getline(std::cin, mytopic);
    int index= findtopic(topic, mytopic, size);
    std::cout<<"Your topic is at index: "<<index;




    return 0;
}
int findtopic(std::string topic[], std::string mytopic, int size){
  for (int i=0; i<size; i++){
    if (topic[i]==mytopic){
        return i;
    }
  }
  return -1;

}