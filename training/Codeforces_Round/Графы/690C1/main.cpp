#include <iostream>
#include <vector>

using namespace std;

bool flag_ans = 1;

void DFS(vector<vector<int>> &arr, vector<bool> &visited, int x, int y) {
    for (int _x: arr[x]) {
        if (_x!=y) {
            if (visited[_x]) {flag_ans=0; return;}
            visited[_x]=1;
            DFS(arr, visited, _x, x);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> arr(n+1);
    vector<bool> visited(n+1, 0); visited[1]=1;
    for (int i=0; i<m; ++i) {
        int u, v; cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    DFS(arr, visited, 1, 0);
    for (int i=1; i<=n && flag_ans; ++i) {if (!visited[i]) {flag_ans=0;}}
    if (flag_ans) {cout << "yes";} else {cout << "no";}
}
