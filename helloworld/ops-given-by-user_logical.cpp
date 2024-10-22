#include<iostream>
using namespace std;
int main(){
int  num1, num2;
char op; 
cout<<"Enter two numbers \n";
cin>>num1>>num2;
cout<<"Enter an operator";
cin>>op;
if(op=='/'){
    cout<<"The Division of two numbers is "<<num1/num2;
    }
else if(op=='*'){
    cout<<"The Product of two numbers is "<<num1*num2;
}
else if(op=='+'){
    cout<<"The sum of two numbers is "<<num1+num2; 
}
else if(op=='-'){
    cout<<"The subtraction of two numbers is"<<num1-num2;
}
else if(op=='%'){
    cout<<"The MOD of two numbers is "<<num1%num2;
}
else{
    cout<<"error";
}
    return 0;
}
