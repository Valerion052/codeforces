#include <iostream>
#include <vector>

using namespace std;

const int N = 20001;
vector<int> adj[N];
int visited[N]{};
int C = 0;

void DFS(int u) {
    visited[u]=C;
    for (int v: adj[u]) {
        if (visited[v]==0)
        DFS(v);
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

    for (int j=1; j<=n; ++j) {
        if (visited[j]==0) {++C; DFS(j);}
    }

    cout << C << "\n";
    for (int k=1; k<=n; ++k) {cout << visited[k] << ' ';}

    
}