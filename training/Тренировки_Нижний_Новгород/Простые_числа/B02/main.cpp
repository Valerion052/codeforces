#include <iostream>
#include <bitset>

using namespace std;

const int N = 1000001;

bitset<N> d;

void sieve(int k) {
    for (int i=2; i*i<=k; ++i) {
        if (d[i]==0) {
            for (int j=i*i; j<=k; j+=i) {
                d[j]=1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    if (n%2==0) {cout << 4 << ' ' << n-4; return 0;}
    // else {cout << 9 << ' ' << n-9; return 0;}

    sieve(n);
    d[0]=d[1]=1;

    for (int i = 4; i<n; ++i) {
        if (d[i] && d[n-i]) {cout << i << ' ' << n-i; return 0;}
    }

}