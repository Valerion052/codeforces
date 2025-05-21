#include <iostream>

using namespace std;

int check(long long n, long long k, long long a, long long b, long long c) {
    long long d = k-c*a;
    long long _n=n-c;
    return d-_n*b>0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        long long k, n, a, b;
        cin >> k >> n >> a >> b;

        long long l=0, r=n, ans=-1;
        while (l<=r) {
            long long c=(l+r)/2;
            if (check(n, k, a, b, c)) {l=c+1; ans=c;}
            else {r=c-1;}
        }
        cout << ans << "\n";
    }
}