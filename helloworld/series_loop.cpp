#include<iostream>
using namespace std;
int main(){
float m, sl, el;
cout<<"Enter starting number";
cin>>sl;
cout<<"Enter ending number";
cin>>el;

do{
   cout<<sl/(sl*sl*sl)<<"\t";

sl++;
}while(sl<=el);


}