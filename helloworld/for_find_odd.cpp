#include <iostream>
using namespace std;
int main(){
    int sn , en;
    cout<<"Enter the starting number \n";
    cin>>sn;
    cout<<"Enter the ending number \n";
    cin>>en;
    for(int i=sn;i>=sn&&i<=en;i++){
       if(i%2!=0){
        cout<<i<<"\t";
       }
        }
    

    return 0;
}