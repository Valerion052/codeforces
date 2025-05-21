#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n+1]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    int dp[n+1]{};
    dp[1] = arr[1];
    for (int j=2; j<=n; ++j) {
        dp[j] = max(dp[j-1], dp[j-2]) + arr[j];
    }

    cout << dp[n];
}