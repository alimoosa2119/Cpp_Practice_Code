#include<iostream>
using namespace std;
int main(){
    float weight, height,BMI;
cout<<"Enter your weight";
cin>>weight;
cout<<"Enter your height";
cin>>height;
BMI=weight/height;
cout<<BMI;
if(BMI<18.5){
    cout<<"underweight";
}
if(BMI>=18.5&&BMI<=24.9){
    cout<<"Normal";
}
if(BMI>=25.0&&BMI<=29.9){
    cout<<"Overweight";
}
if(BMI>=30.0){
    cout<<"Obese";
}

return 0;
}