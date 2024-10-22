#include<iostream>
using namespace std;
int main(){
float weight, height,BMI;
cout<<"Enter your weight \n";
cin>>weight;
cout<<"Enter your height";
cin>>height;
BMI=weight/height;
cout<<BMI;
if (BMI<=18.5){
    cout<<"under weight";
}
if (BMI>18.5){
    if(BMI<24.9){
    cout<<"Normal";
}
}
if (BMI>=25){
    if(BMI<29.9){
    cout<<"Overweight";
}
}
if(BMI>=30.0){
    cout<<"Obese";
}

    return 0;
}