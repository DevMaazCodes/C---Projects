#include <iostream>
int main(){
    int capacity=2;
    int count=0;
    std::string *plist= nullptr;
    std::string input;
    plist= new std::string [capacity];
    while (true){
            if (capacity==count){
        std::cout << "--- List full! Resizing... ---\n";
        capacity*=2;
        std::string *newlist=new std::string [capacity];
        for (int i=0; i<count; i++){
            newlist[i]=plist[i];}
            delete[] plist;
            plist= newlist;
    }
    std::cout<<"ENTER YOUR WORK #"<< count+1 <<" or TYPE 'EXIT' in uppercase"<<'\n';
    
    std::getline(std::cin>>std::ws, input);
    if(input=="EXIT"){
        std::cout<<std::endl;
        break;
    }
    

    plist[count]=input;
    count++;
    }
    std::cout<<"Your final list"<<'\n'<<'\n';
     for (int j=0; j<count; j++){
        std::cout<<plist[j]<<'\n';
     }
     delete[] plist;
    return 0;
}
