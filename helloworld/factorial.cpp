#include <iostream>
using namespace std;
int main(){
    unsigned long int n;
    int l,f;
    cout<<"Enter a number";
    cin>>n;
    l = 1;
    f = 1;
   while(l<=n){
      f *= l;
     l++;
    } 
    cout<<f;

    return 0;
}