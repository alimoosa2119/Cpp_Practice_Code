#include<iostream>
using namespace std;
int main(){
    int i,n,l;
    cout<<"Enter a number \n";
    cin>>n;
    cout<<"Enter the table limit \n";
    cin>>l;
    cout<<"Enter the starting number \n";
    cin>>i;
   do{
        if(i%2!=0){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    i++;
    }while(i<=l);

}