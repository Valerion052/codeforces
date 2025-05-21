#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        string s;
        cin >> n >> m >> k >> s;
        s = "L" + s + "#";

        vector<pair<bool, int>> dp(n+2, {0, 1e9});
        dp[0].first=1;
        dp[0].second=0;
        
        for (int i=0; i<=n; ++i) {
            if (s[i]=='W' && dp[i].first) {
                int count_k = dp[i].second; ++count_k;
                if (count_k<=k) {
                    if (s[i+1]!='C') {
                        dp[i+1].first=1;
                        dp[i+1].second=min(count_k, dp[i+1].second);
                    }
                }
            }
            else if (s[i]=='L' && dp[i].first) {
                for (int j=1; j<=m; ++j) {
                    int index=min(i+j, n+1);
                    if (s[index]!='C') {
                        dp[index].first=1;
                        dp[index].second=min(dp[i].second, dp[index].second);
                    }
                }
            }
        }

        if (dp[n+1].first) {cout << "YES\n";} else {cout << "NO\n";}
    }
}