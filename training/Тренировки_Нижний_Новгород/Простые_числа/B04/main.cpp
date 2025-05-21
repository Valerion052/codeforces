#include <iostream>
#include <bitset>

using namespace std;

int a, b, k;
const int N = 1010000;
bitset<N> d;
int sum[N]{};

void sieve() {
    for (int i=2; i*i<N; ++i) {
        if (d[i]==0) {
            for (int j=i*i; j<N; j+=i) {
                d[j] = 1;
            }
        }
    }
}

void make_sum() {
    for (int i=1; i<N; ++i) {
        int value;
        if (d[i]) {value = 0;} else {value = 1;}
        sum[i] = sum[i-1] + value;
    }

}

bool cheak(int line) {
    for (int i=a; i<=b+1-line; ++i) {
        int value = sum[i+line-1] - sum[i-1];
        if (value < k) {return 0;}
    }
    return 1;
}


int main() {
    cin >> a >>  b >> k;
    
    sieve();
    d[0] = d[1] = 1;
    make_sum();

    // cout << cheak(500000);

    // for (int i=499997; i<=500003; ++i) {cout << sum[i] << ' ';}

    int l = 1, r = b-a+1, ans = -1;

    while(l<=r) {
        int c = (l+r)/2;
        if (cheak(c)) {r = c-1; ans = c;}
        else {l = c + 1;}
    }

    cout << ans;
}