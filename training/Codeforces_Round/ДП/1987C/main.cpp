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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int dp[n];
        dp[n-1] = arr[n-1];
        for (int j=n-2; j>=0; --j) {
            dp[j]=max(arr[j], dp[j+1]);
            if (arr[j]<=dp[j+1]) {++dp[j];}
        }
        cout << dp[0] << '\n';
    }
}