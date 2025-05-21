#include <iostream>

using namespace std;

bool check(int n, long long P, int l, int t, int k) {
    int _t = n/7;
    if (n%7!=0) {++_t;}
    _t = min(2*k, _t);

    return (long long)k*l + _t*(long long)t >= P;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    while (q--) {
        int n, l, t;
        long long P;
        cin >> n >> P >> l >> t;

        int left=0, right=n, ans = 0;
        while (left<=right) {
            int c=(left+right)/2;
            if (check(n, P, l, t, c)) {right=c-1; ans=c;}
            else {left=c+1;}
        }

        cout << n-ans << "\n";
    }
}