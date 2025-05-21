#include <iostream>
#include <vector>

using namespace std;

void DFS(int x, int level, int &ans,  vector<int> &queue, vector<vector<pair<int, int>>> &adj) {
    
    ans=max(ans, queue[x]);
    for (auto [y, f]: adj[x]) {
        if (queue[y]==-1) {
            if (level>f) {queue[y]=queue[x]+1;}
            else {queue[y]=queue[x];}
            DFS(y, f, ans, queue, adj);
        }
    }

}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<vector<pair<int, int>>> adj(n+1);
        for (int i=1; i<n; ++i) {
            int u, v; cin >> u >> v;
            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }

        vector<int> queue(n+1, -1); queue[1]=1;
        int ans=0;
        DFS(1, 0, ans, queue, adj);
        cout << ans << "\n";

    }
}