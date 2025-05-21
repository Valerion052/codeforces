#include <iostream>
#include <vector>

using namespace std;

bool visited[101];
vector<vector<int>> adj(101);

void DFS(int u) {
    visited[u]=1;
    for (auto x: adj[u]) {
        if (!visited[x]) {
            DFS(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1);
    for (int j=1; j<=n; ++j) {if (!visited[j]) {cout << "NO"; return 0;}}
    cout << "YES";
}