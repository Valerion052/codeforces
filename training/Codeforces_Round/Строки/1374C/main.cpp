#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // int open = 0, close = 0;
        // int error_open = 0, error_close = 0;
        // for (int i=0; i<n; ++i) {
        //     if (s[i]=='(') {++open;}
        //     else {++close;}
        //     if (close > open) {++error_close; open = 0, close = 0;}

        // }

        // for (int j=n-1; j>=0; --j) {
        //     if (s[j]=='(') {++open;}
        //     else {++close;}
        //     if (close < open) {++error_open; open = 0, close = 0;}
        // }

        // cout << min(error_open, error_close) << "\n";

        int balance = 0, ans = 0;
        for (int i=0; i<n; ++i) {
            if (s[i]=='(') {++balance;}
            else {
                --balance;
                if (balance<0) {balance=0; ++ans;}
            }
        }
        cout << ans << "\n";
    }
}