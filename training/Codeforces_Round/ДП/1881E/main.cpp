#include <iostream>
#include <vector>

using namespace std;

int value(vector<int> &arr, vector<int> &dp, int x) {
    if (x+arr[x]>=arr.size()) {return 1e9;}
    if (x+arr[x]==arr.size()-1) {return 0;}
    return dp[x+arr[x]+1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        vector<int> dp(n);
        dp[n-1]=1;
        for (int i=n-2; i>=0; --i) {
            dp[i]=min(dp[i+1]+1, value(arr, dp, i));
        }
        cout << dp[0] << "\n";

    }
}