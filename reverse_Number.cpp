#include <iostream>
using namespace std;


int main() {
    
    int x;
    int i=0;
    
    cout<<"Enter Number:";
    cin>>x;
    
    while(x!=0){
       int y = x%10; 
       i = i*10+y;
       x= x/10;
       
    }
    
    cout<<"Reverse is:"<<i<<endl;
        

    return 0;
}