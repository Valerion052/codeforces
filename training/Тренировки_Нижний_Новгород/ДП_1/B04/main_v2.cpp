#include <iostream>
#include <vector>

int MOD = 1e9+7;

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> dp = {1, 1, 1, 0};
    vector<long long> ans(4, 0);

    for (int i=2; i<=n; ++i) {
        ans[0] = (dp[1] + dp[2] + dp[3])%MOD;
        ans[1] = (dp[0] + dp[2] + dp[3])%MOD;
        ans[2] = (dp[1] + dp[0] + dp[3])%MOD;
        ans[3] = (dp[1] + dp[2] + dp[0])%MOD;
        dp = ans;
    }

    cout << dp[3];
}