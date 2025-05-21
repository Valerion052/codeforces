#include <iostream>

using namespace std;


long long f(long long k) {
    long long sum = 1*k+1*(k-1)*k/2;
    return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long l = 1, r = m;

        while (l<=r) {
            long long c = (l+r)/2;
            if (n+f(c)<=m) {l = c+1;}
            else {r = c-1;}
        }

        cout << l << '\n';

    }
}