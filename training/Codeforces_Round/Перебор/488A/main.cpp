#include <iostream>
#include <algorithm>

using namespace std;

bool check(long long k) {
    while (k>0) {
        if (k%10==8) {return 1;}
        k/=10;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    for (int i=1; i<=16; ++i) {
        if (check(abs(n+i))) {cout << i; return 0;}
    }
}