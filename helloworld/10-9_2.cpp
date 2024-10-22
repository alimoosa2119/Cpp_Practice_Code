#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter your marks \n";
    cin>>m;
char result= (m<=81) ? 'A' :(m<=71)? 'A':(m<=61)?'B':(m<=51)?'C':(m<=41)?'D':'F';
cout<<result;
}