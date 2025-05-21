#include <iostream>
#include <vector>
#include <queue>

using namespace std;

 vector<bool> BFS(vector<vector<int>> adj, int start) {
    queue<int> q;
    vector<bool> visited(adj.size());

    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u: adj[v]) {
            if (!visited[u]) {
                visited[u] = 1;
                q.push(u);
            }
        }
    }
    return visited;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    for (int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited = BFS(adj, 1);

    for (int x=1; x<=n; ++x) {
        if (!visited[x]) {cout << "NO"; return 0;}
    }
    cout << "YES";



}