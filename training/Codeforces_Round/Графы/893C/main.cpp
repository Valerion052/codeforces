#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int N=1e5+1;
bool visited[N]{};

void BFS(int x, vector<vector<int>> &adj) {
    queue<int> q;
    q.push(x);
    visited[x]=1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int k: adj[v]) {
            if (!visited[k]) {
                visited[k]=1;
                q.push(k);
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    pair<int, int> p[n+1];
    for (int i=1; i<=n; ++i) {
        cin >> p[i].first;
        p[i].second=i;
    }
    sort(p, p+n+1);

    vector<vector<int>> adj(n+1);
    for (int j=0; j<m; ++j) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    long long ans=0;
    for (auto [f, s]: p) {
        if (!visited[s]) {
            ans+=f;
            BFS(s, adj);
        }
    }
    cout << ans;
}