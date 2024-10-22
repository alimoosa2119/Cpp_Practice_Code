#include<iostream>
using namespace std;
int main(){
int sl,p, el;
cout<<"Enter the starting number";
cin>>sl;
cout<<"Enter the ending number";
cin>>el;
do{
    p=sl++;
    cout<<sl+p<<"\t";    
    sl++;
    sl--;
}while(sl<=el);

    return 0;
}