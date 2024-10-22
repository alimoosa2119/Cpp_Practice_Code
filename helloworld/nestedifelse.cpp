#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter value in a: \n";
     cin>>a;
 cout<<"Enter value in b: \n";
     cin>>b;
 cout<<"Enter value in c: \n";
     cin>>c;
if(a>c){
    if(a>b){
        cout<<"The greater value is: "<<a<<endl;
        if(c>b){
            cout<<"The lesser value is: "<<b<<endl;
        }else{
            cout<<"The lesser value is: "<<c<<endl;
        }
    }else{
        cout<<"The greater value is: "<<b<<endl;
        cout<<"The lesser value is: "<<c<<endl;
    }
    
}else{
    if(c>b){
        cout<<"The greater value is: "<<c<<endl;
        if(b>a){
            cout<<"The lesser value is: "<<a<<endl;
        }
        else{
            cout<<"The lesser value is: "<<b<<endl;
        }
    }else{
        cout<<"The greater value is: "<<b<<endl;
        cout<<"The lesser value is: "<<a<<endl;
    }
}
  return 0;
}