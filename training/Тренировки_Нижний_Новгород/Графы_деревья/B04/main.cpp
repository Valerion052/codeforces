#include <iostream>
#include <vector>

using namespace std;


const int N=1e5+1;
bool dict[N]{};
int d[N]{};
vector<vector<int>> adj(N);

int n, m;
int ans=0;

void DFS(int x, int y, int f) {
    d[x]=max(d[y], f);

    for (int v: adj[x]) {
        if (v!=y) {
            DFS(v, x, dict[v] ? f+1:0);
        }
    }
    if (x!=1 && adj[x].size()==1) {
        if (d[x]<=m) {++ans;}
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i=1; i<=n; ++i) {cin >> dict[i];}
    for (int j=1; j<n; ++j) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    DFS(1, 1, dict[1]);
    // for (int i=1; i<=n; ++i) {cout << i << ' ' << d[i] << "\n";}
    cout << ans;
}