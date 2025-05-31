#include <iostream>
#include <vector>

using namespace std;

void DFS(int start, vector<long long> &arr, vector<vector<int>> &adj, vector<bool> &visited, vector<pair<long long, long long>> &ans) {

    visited[start]=1;
    for (int x: adj[start]) {
        if (!visited[x]) {
            ans[x].first=max(arr[x], arr[x]+ans[start].second);
            ans[x].second=max(-arr[x], ans[start].first-arr[x]);
            DFS(x, arr, adj, visited, ans);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector<long long> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        vector<vector<int>> adj(n);
        for (int i=1; i<n; ++i) {
            int x, y; cin >> x >> y; --x, --y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        vector<bool> visited(n, 0);
        vector<pair<long long, long long>> ans(n);
        ans[0].first=arr[0];
        ans[0].second=-arr[0];
        DFS(0, arr, adj, visited, ans);

        for (int i=0; i<n; ++i) {
            // cout << ans[i].first << ' ';
            cout << ans[i].first << ' ';
        }
        cout << "\n";


    }
}