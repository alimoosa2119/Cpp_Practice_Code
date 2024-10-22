#include<iostream>
using namespace std;
int main(){
    int i=1,x=1,y,j; 
   do{
        j=5;
        do{
            if(i<j){
             cout<<" ";
            }
            else{
                cout<<"*";
            }
         j--;
         
        }while(1<=j);

         j=1;
        do{
            cout<<"*";
        j++;
        }while(j<=i);
    
        cout<<endl;
     i++;
    } while(i<=5);



     do{
         y=1;
        do{
            if(y<x){
             cout<< " ";
            }
            else{
                cout<<"*";
            }
         y++;
        }while(y<=5);

         y=5;
        do{
            cout<<"*";
        y--;
        }while(x<=y);
        cout<<endl;
     x++;
    }while(x<=5);
    return 0;
}