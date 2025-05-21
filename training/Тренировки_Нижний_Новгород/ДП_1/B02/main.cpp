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

        int arr[n+1], dp[n+1]{};
        for (int i=1; i<=n; ++i) {cin >> arr[i]; ++dp[i];}

        int ans = 1;
        for (int j=1; j<=n; ++j) {
            for (int k=2; j*k<=n; ++k) {
                if (arr[j] < arr[j*k]) {
                    dp[j*k] = max(dp[j*k], dp[j]+1);
                    ans = max(ans, dp[j*k]);
                }
            }
        }
        cout << ans << '\n';
    }
}