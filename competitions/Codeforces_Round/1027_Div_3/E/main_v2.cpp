#include <iostream>
#include <vector>

using namespace std;

const long long INF = 4e18;

void DFS(int y, int p, int level,
         long long pref,
         long long min_pref,
         long long max_pref,
         const vector<long long>& arr,
         const vector<vector<int>>& adj,
         vector<long long>& ans)
{
    long long value = pref+(level%2!=0 ?-arr[y]:arr[y]);

    if (level%2!=0) {ans[y] = max_pref-value;}
    else {ans[y] = value-min_pref;}

    long long newMin = min(min_pref, value);
    long long newMax = max(max_pref, value);

    for (int z : adj[y]) {
        if (z!=p) {DFS(z, y, level+1, value, newMin, newMax, arr, adj, ans);}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;
        vector<long long> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        vector<vector<int>> adj(n);
        for (int i = 1; i < n; ++i) {
            int x, y; cin >> x >> y; --x; --y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        vector<long long> ans(n);
        DFS(0, -1, 0, 0, 0, 0, arr, adj, ans);
        for (int i=0; i<n; ++i) {cout << ans[i] << ' ';} cout << "\n";
    }
}
