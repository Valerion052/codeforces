#include <iostream>

using namespace std;

int main () {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long l, r;
    cin >> n >> l >> r;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long ans = 0;
    for (int mask=1; mask < (1<<n); ++mask) {
        long long value = 1;
        bool flag = false;
        for (int i=0; i<n; ++i) {
            if (mask & (1 << i)) {
                if (value > r / arr[i]) {flag = true; break;}
                else {value*=arr[i];}
            }
        }

        if (flag) {continue;}

        int bitsCount = __builtin_popcount(mask);
        long long dividers = r/value-(l-1)/value;

        if (bitsCount%2==0) {ans-=dividers;}
        else {ans+=dividers;}
    }
    cout << ans;
}