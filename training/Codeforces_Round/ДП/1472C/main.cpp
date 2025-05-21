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
        cin >> n;

        long long arr[n+1];
        for (int i=1; i<=n; ++i) {cin >> arr[i];}

        long long dp[n+1]{};
        dp[1] = arr[1];
        long long ans = 0;

        for (int j=1; j<=n; ++j) {
            int new_index = arr[j] + j;
            dp[j] = max(arr[j], dp[j]);
            if (new_index<=n) {
                dp[new_index] = max(dp[new_index], dp[j] + arr[new_index]);
            }
            ans = max(ans, dp[j]);
        }
        cout << ans << "\n";
    }
}