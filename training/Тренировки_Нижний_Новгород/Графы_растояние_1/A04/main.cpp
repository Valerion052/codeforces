#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool BFS(vector<vector<int>> adj, int start) {
    queue<int> q;
    vector<bool> visited(adj.size());
    vector<int> parent(adj.size(), -1);

    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u: adj[v]) {
            if (!visited[u]) {
                visited[u] = 1;
                parent[u] = v;
                q.push(u);
            }
            else if (parent[v] != u) {return 0;}
        }
    }
    for (int x=1; x<adj.size(); ++x) {if (!visited[x]) {return 0;}}
    return 1;
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

    if (n-1!=m) {cout << "NO"; return 0;}

    int start = 1;
    for (int x=1; x<=n; ++x) {if (!adj[x].empty()) {start=x; break;}}

    bool flag = BFS(adj, start);
    if (flag) {cout << "YES";} else {cout << "NO";}

}