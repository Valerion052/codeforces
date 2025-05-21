#include <iostream>
#include <bitset>
#include <numeric>

using namespace std;

const int N = 1000001;
bool d[N];

void sieve(int k) {
    for (int i=2; i<=k; ++i) {
        if (d[i]==0) {
            for (int j=2*i; j<=k; j+=i) {
                d[j] = 1;
            }
        }
    }
}

int main() {
    int l, r;
    cin >> l >> r;

    sieve(r);
    d[0] = d[1] = 1;

    int counter = r-l+1 - accumulate(d+l, d+r+1, 0);
    
    cout << counter << endl;

    for (int i = l; i <= r && counter !=0; ++i) {
        if (d[i]==0) {cout << i << ' ';}
    }
}