#include<iostream>
using namespace std;

int main() {
    int n, p, k;
    cout << "Enter a number: ";
    cin >> n;

    p = 2;  
    k = 0;  
    
    do{
        if (n % p == 0) {
            k++;
        }
        p++;
    } while (p <= n/2);

    if (k == 0) {
        cout << "Prime" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
