#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> BFS(vector<vector<int>> adj, int start) {
    queue<int> q;
    vector<bool> visited(adj.size());
    vector<int> ans;

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
        ans.push_back(v);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, start;
    cin >> n >> m >> start;

    vector<vector<int>> adj(n+1);
    for (int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = BFS(adj, start);
    cout << ans.size() << "\n";
    for (auto x: ans) {cout << x << ' ';}
}