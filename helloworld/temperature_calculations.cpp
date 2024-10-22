#include<iostream>
using namespace std;
int main(){
 int temp;
 cout<<"Enter temperature in celsius \n";
    cin>>temp;
if(temp<=0){
    cout<<"freezing";
}else{
    if(temp<=10){
        cout<<"cold";
        }else{
            if(temp<=20){
                cout<<"cool";
            }else{
                if(temp<=30){
                    cout<<"warm";
                }else{
                    if(temp<=40){
                        cout<<"hot";
                    }else{
                        cout<<"QIAMAT";
                    }
                }
            }
    }
}

      return 0;

}