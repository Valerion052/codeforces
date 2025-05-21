#include <iostream>
#include <vector>

int MOD = 1e9+7;

using namespace std;

int main() {
    int n;
    cin >> n;

    long long dp[2];
    dp[0]=3;
    dp[1]=0;

    for (int i=2; i<=n; ++i) {
        int value = dp[0];
        dp[0] = ((dp[0]*2)%MOD + (dp[1]*3)%MOD)%MOD;
        dp[1] = value;
    }

    cout << dp[1];
}