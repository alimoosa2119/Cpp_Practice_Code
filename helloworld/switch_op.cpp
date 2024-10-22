#include<iostream>
using namespace std;
int main(){
    int  num1, num2;
char op; 
cout<<"Enter two numbers \n";
cin>>num1>>num2;
cout<<"Enter an operator";
cin>>op;
switch(op){
case '+':
cout<<"The sum of two numbers is "<<num1+num2;
break;
case '-':
cout<<"The Difference of two numbers is "<<num1-num2;
break;
case '*':
cout<<"The Proudct of two numbers is "<<num1*num2;
break;
case '/':
cout<<"The Division of two numbers is "<<num1/num2;
break;
case '%':
cout<<"The MOD of two numbers is "<<num1%num2;
break;
default:
cout<<"ERROR";
break;



}





}