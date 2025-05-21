#include <iostream>
#include <algorithm>

using namespace std;

int find_value(int (&arr)[], long long (&dp)[], long long m, int L, int r) {
    int l = L, ans=L;
    while (l<=r) {
        int c=(l+r)/2;
        if (dp[c]<=m && arr[c]-arr[L]<=1) {l=c+1; ans = c;}
        else {r=c-1;}
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        int arr[n]{};
        for (int i=0; i<n; ++i) {cin>>arr[i];}
        sort(arr, arr+n);

        long long dp[n];
        dp[0]=arr[0];
        for (int i=1; i<n; ++i) {dp[i]=dp[i-1]+arr[i];}

        long long ans = 0;
        for (int j=0; j<n; ++j) {
            int v = find_value(arr, dp, dp[j]+m-arr[j], j, n-1);
            long long value = dp[v]-(j>0 ? dp[j-1] :0);
            value = value > m ? 0 : value;
            ans = max(ans, value);
        }
        cout << ans << "\n";

        

    }
}