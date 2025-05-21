#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int n;
    cin >> n;

    long long a = 1, b = 1;

    for (int i=0; i<n; ++i) {
        a = (a * 27)%MOD;
        b = (b * 7)%MOD;
    }

    cout << (a - b + MOD)%MOD;

}