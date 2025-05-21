#include <iostream>
#include <vector>

using namespace std;

long long n, p, k, x, y;
string s;

long long f(int start, vector<long long> &dp) {
    if (start>n) {return 0;}
    if (dp[start]!=-1) {return dp[start];}
    return dp[start]=(s[start]=='0' ? x: 0) + f(start+k, dp);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        cin >> n >> p >> k >> s >> x >> y;
        s="#"+s;

        vector<long long> dp(n+2, -1);
        long long ans=1e18;
        for (int i=p; i<=n; ++i) {
            ans = min(ans, (i-p)*y+f(i, dp));
           
            // cout << i << ' ' <<  f(i) << ' ' << (i-p)*y << "       ";
            // for (int x=p; x<=n; ++x) {cout << dp[x] << ' ';} cout << "\n";

        }
        cout << ans << "\n";
    }
}