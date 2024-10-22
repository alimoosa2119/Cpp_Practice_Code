#include <iostream>
using namespace std;
int main(){
    int n ,p;
    cout<<"Enter a number";
    cin>>n;
    p=1;
    for(int l=1;l<=n;l++){
        p*=l;  
    }
    cout<<p; 
   
    return 0;
}