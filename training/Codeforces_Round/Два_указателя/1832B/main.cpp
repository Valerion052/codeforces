#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        long long dp[n+1]{};

        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n);
        for (int j=0; j<n; ++j) {dp[j+1]=dp[j]+arr[j];}


        long long ans=0;
        for (int _k=0; _k<=k; ++_k) {
            int l=2*_k, r=n-(k-_k);
            ans = max(ans, dp[r]-dp[l]);
        }

        cout << ans << "\n";
    }
}