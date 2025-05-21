#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1), dp(n+1);
    for (int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

        dp[a].push_back(b);
        dp[b].push_back(a);
    }

    bool flag=1;
    int ans=0;
    while (flag) {
        flag=0;
        set<int> drop;
        for (int j=1; j<=n; ++j) {if (adj[j].size()==1) {drop.insert(j);}}

        for (int d: drop) {
            flag=1;
            for (int v: dp[d]) {
                auto it = find(adj[v].begin(), adj[v].end(), d);
                if (it!=adj[v].end()) {adj[v].erase(it);}
            }
            adj[d].clear();
        }
        if (flag) {++ans;}
    }
    cout << ans;
}