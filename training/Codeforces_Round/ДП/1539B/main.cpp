#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n, q;
    cin >> n >> q >> s;
    int dp[n+1]{};

    for (int i=1; i<=n; ++i) {dp[i] = dp[i-1]+(s[i-1]-'a')+1;}

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << dp[r]-dp[l-1] << '\n';
    }
}