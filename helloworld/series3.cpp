#include<iostream>
using namespace std;
int main(){
    int sl,s, x, p,e, el;
 cout<<"Enter the starting number \n";
 cin>>sl;
 cout<<"Enter the ending number \n";
 cin>>el;
 cout<<"Enter the series i.e 2 - 3 \n";
 cin>>s;
if(s==2){
    do{
    p=sl++;
    cout<<sl+p<<"\t";    
    sl++;
    sl--;
}while(sl<=el);
}
else if(s==3){
    while(sl<el){
    e=sl++;
    x=e+sl++;
    cout<<sl+x <<"\t";
    sl--;
    sl++;
 }

}


    return 0;
}