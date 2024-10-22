#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers \n";
    cin>>a>>b>>c;
    int max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    cout<<max;





}