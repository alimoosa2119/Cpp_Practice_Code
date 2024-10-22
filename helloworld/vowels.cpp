#include<iostream>
using namespace std;
int main(){
char vowel;
cout<<"Enter a character \n";
cin>>vowel;
if(vowel=='a'||vowel=='A'){
    cout<<"You entered a or A";
}
else if(vowel=='e'||vowel=='E'){
        cout<<"You entered e or E";
}else if(vowel=='i'||vowel=='I'){
            cout<<"You entered i or I";
           }else if(vowel=='o'||vowel=='O'){
                cout<<"You entered o or O";
              } else if(vowel=='u'||vowel=='U'){
                    cout<<"You entered u or U";
}else{
    cout<<"consonent";
}
    return 0;
}