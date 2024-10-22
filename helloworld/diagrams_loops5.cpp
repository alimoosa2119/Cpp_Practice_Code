#include<iostream>
using namespace std;
int main(){
    int i=1,j; 
   do{
        j=5;
        while(1<=j){
            if(i<j){
             cout<<" ";
            }
            else{
                cout<<"*";
            }
         j--;
        }
        cout<<endl;
     i++;
    } while(i<=5);
    return 0;
}