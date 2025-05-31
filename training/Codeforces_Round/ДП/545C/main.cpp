#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<pair<long long, long long>> arr(n+2);
    for (int i=1; i<=n; ++i) {cin >> arr[i].first >> arr[i].second;}
    arr[0].first=-1e18; arr[0].second=0;
    arr[n+1].first=1e18; arr[n+1].second=0;

    vector<vector<long long>> dp(n+2, vector<long long>(3, 0));
    for (int x=1; x<=n; ++x) {
        
        dp[x][1]=max(max(dp[x-1][0], dp[x-1][1]), dp[x-1][2]);
        
        if (arr[x].first-arr[x].second>arr[x-1].first) {
            dp[x][0]=max(dp[x-1][0], dp[x-1][1])+1;
            if (arr[x].first-arr[x].second>arr[x-1].first+arr[x-1].second) {dp[x][0]=max(dp[x-1][2]+1, dp[x][0]);}
        }
        
        if (arr[x].first+arr[x].second<arr[x+1].first) {dp[x][2]=dp[x][1]+1;}
    }
    cout << max(max(dp[n][0], dp[n][1]), dp[n][2]);
}