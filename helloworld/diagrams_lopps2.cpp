#include<iostream>
using namespace std;
int main(){
    int i=1,j; 
    do{
        j=5;
        while(i<=j){
            cout<<"*";
        j--;
        }
        cout<<endl;
        i++;
    }while(i<=5);

    return 0;
}