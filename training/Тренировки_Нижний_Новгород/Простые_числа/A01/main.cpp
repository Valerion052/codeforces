#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n<=1) {cout << 0; return 0;}
 
    for (int i=2; i<n; ++i) {
        if (n%i==0) {cout << 0; return 0;}
    }
 
    cout << 1;
}