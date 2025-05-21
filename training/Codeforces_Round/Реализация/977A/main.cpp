#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k>0) {
        int value = min(n%10, k);
        n-=value;
        k-=value;
        if (k>0) {n/=10; --k;}
    }

    cout << n;
}