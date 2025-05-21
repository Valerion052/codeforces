#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+1;
vector<vector<int>> adj(N);
bool init[N]{}, goal[N]{};
vector<int> ans;

void DFS(int x, int y, bool b, bool f) {
    bool _init = f ? !init[x] : init[x];
    if (_init!=goal[x]) {
        ans.push_back(x);
        if (f) {f=0;}
        else {f=1;}
    }

    for (int v: adj[x]) {
        if (v!=y) {
            DFS(v, x, f, b);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i=1; i<n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int j=1; j<=n; ++j) {cin >> init[j];}
    for (int k=1; k<=n; ++k) {cin >> goal[k];}

    DFS(1, 0, 0, 0);

    cout << ans.size() << "\n";
    for (auto p: ans) {cout << p << "\n";}

}