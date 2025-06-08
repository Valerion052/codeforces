#include <iostream>
#include <vector>

using namespace std;

int LEVEL=0, name=0;

void DFS(vector<vector<int>> &arr, int x, int y, int level) {
    if (level>LEVEL) {LEVEL=max(LEVEL, level); name=x;}
    for (int _x: arr[x]) {
        if (_x!=y) {DFS(arr, _x, x, level+1);}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> arr(n+1);
    for (int i=0; i<m; ++i) {
        int u, v; cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    DFS(arr, 1, 0, 0);
    LEVEL=0;
    DFS(arr, name, 0, 0);
    cout << LEVEL;
}
