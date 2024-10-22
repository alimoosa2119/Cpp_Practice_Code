#include<iostream>
using namespace std;

int main() {
    int p, k=1, sl, el;

    cout<<"Enter the starting limit \n";
    cin>>sl;
    cout<<"Enter the ending limit \n";
    cin>>el;
      
    while(sl<=el){
        k = 0;
        p = 2;
        while (p <= sl/2) {

            if (sl % p == 0) {
                k++;
            }
        p++;
    }

    if (k == 0) {
        cout << sl << endl;
    }
    
    sl++;
    }

    return 0;
}