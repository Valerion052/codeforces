#include <iostream>

using namespace std;


int euler(int n) {
    int ans = n;

    for (int i=2; i*i<=n; ++i) {
        if (n%i==0) {
            while(n%i==0) {n/=i;}
            ans -= ans/i;
        }
    }
    
    if (n>1) {ans -=ans/n;}
    return ans;

}

int main() {
    int n;
    cin >> n;

    cout << euler(n);

}