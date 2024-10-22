#include<iostream>
using namespace std;
int main(){
   } for(int i=1;i<=5;i++){
        for(int j=5;1<=j;j--){
            if(i<j){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    

    for(int x=1;x<=5;x++){
         for(int y=1;y<=5;y++){
            if(y<x){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
      for(int y=5;x<=y;y--){
            cout<<"*";
        }


        cout<<endl;
    }




    return 0;
}