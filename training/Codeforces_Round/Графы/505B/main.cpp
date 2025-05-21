#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n, m;
const int N=101;
vector<vector<set<int>>> adj(N, vector<set<int>>(N));

void DFS(vector<bool> &visited, int x, int color) {
    visited[x]=1;
    for (int y=1; y<=n; ++y) {
        if (adj[x][y].count(color) && !visited[y]) {
            DFS(visited, y, color);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> colors;
    cin >> n >> m;
    for (int i=0; i<m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b].insert(c);
        adj[b][a].insert(c);
        colors.insert(c);
    }

    int q; cin >> q;
    while (q--) {
        int u, v; cin >> u >> v;
        int ans=0;
        for (auto c: colors) {
            vector<bool> visited(N, 0);
            DFS(visited, u, c);
            ans+=visited[v];
        }
        cout << ans << "\n";
    }
}