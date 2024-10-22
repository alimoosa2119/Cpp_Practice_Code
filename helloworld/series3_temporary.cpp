#include<iostream>
using namespace std;
int main(){
    int sl, x , p, el;
 cout<<"Enter the starting number \n";
 cin>>sl;
 cout<<"Enter the ending number \n";
 cin>>el;
 
 while(sl<el){
    p=sl++;
    x=p+sl++;
    cout<<sl+x <<"\t";
    sl--;
    sl++;
 }

    return 0;
}