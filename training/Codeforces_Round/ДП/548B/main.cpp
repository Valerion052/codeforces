#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculate(vector<vector<int>> &arr, int n) {
    int ans=0, local_ans=0;
    for (int i=0; i<arr[n].size(); ++i) {
        if (arr[n][i]) {++local_ans;}
        else {
            ans=max(ans, local_ans);
            local_ans=0;
        }
    }
    return ans;
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> arr(n, vector<int>(m+1, 0));
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {cin>>arr[i][j];}
    }

    vector<int> dp(n);
    for (int i=0; i<n; ++i) {
        dp[i]=calculate(arr, i);
    }

    while (q--) {
        int x, y; cin >> x >> y;
        --x; --y;
        arr[x][y]=1-arr[x][y];
        dp[x]=calculate(arr, x);
        cout << *max_element(dp.begin(), dp.end()) << "\n";
    }
}