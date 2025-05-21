#include <iostream>
#include <vector>

using namespace std;

const int N=1e5+1;
const int MOD=1e9+7;

bool visited[N]{};
vector<vector<int>> adj(N);

int r(int x, int y) {
    int ans = 1;
    while (y--) {
        ans = (ans * (long long)x%MOD)%MOD;
    }
    return ans;
}

int DFS(int x, int p) {
    visited[x]=1;
    for (int v: adj[x]) {
        if (!visited[v]) {p = DFS(v, p+1);}
    }
    return p;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i=1; i<n; ++i) {
        int u, v;
        bool x;
        cin >> u >> v >> x;
        if (!x) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    int ans = r(n, k);
    for (int j=1; j<=n; ++j) {
        if (!visited[j]) {
            ans = ans - r(DFS(j, 1), k);
            if (ans<0) {ans+=MOD;}
        }
    }
    cout << ans;
}