#include <iostream>
#include <vector>

using namespace std;

int DFS(vector<vector<int>> &arr, vector<int> &dp, int x, int y) {
    for (int _x: arr[x]) {
        if (_x!=y) {dp[x] += DFS(arr, dp, _x, x);}
    }
    return dp[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    vector<vector<int>> arr(n+1);
    vector<int> dp(n+1, 1);
    for (int i=0; i<n-1; ++i) {
        int u, v; cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    int start=-1;
    for (int i=1; i<=n; ++i) {if (arr[i].size()==1) {start=1; break;}}

    DFS(arr, dp, start, 0);
    int ans=0;
    for (int i=1; i<=n; ++i) {if (dp[i]%2==0 && (n-dp[i])%2==0) {++ans;}}
    cout << ans-1;
}
