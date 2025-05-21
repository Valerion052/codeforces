#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int dp[101][101]{};
    dp[1][1]=0;
    for (int _j=2; _j<101; ++_j) {dp[1][_j] = _j-1;}
    for (int i=2; i<101; ++i) {
        for (int j=1; j<101; ++j) {dp[i][j] = j + dp[i-1][j];}
    }
    
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        // cout << dp[n][m] << '\n';

        if (dp[n][m]==k) {cout << "YES\n";} else {cout << "NO\n";}
    }
}