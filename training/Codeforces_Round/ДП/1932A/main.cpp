#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    map<char, int> d = {{'.', 0}, {'@', 1}, {'*', -1e7}};

    while (t--) {
        string s;
        int n;
        cin >> n >> s;

        int dp[n+2];
        dp[0]=dp[1]=0;
        
        int ans = 0;
        for (int i=0; i<n; ++i) {
            dp[i+2] = d[s[i]] + max(dp[i+1], dp[i]);
            ans = max(dp[i+2], ans);
        }
        
        cout << ans << '\n';
    }
}
