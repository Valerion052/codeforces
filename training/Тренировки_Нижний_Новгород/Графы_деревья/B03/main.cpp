#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 101;

void DFS(vector<vector<int>> &adj, int (&d)[], int x, int p, int c) {
    d[x]=c;
    for (int v: adj[x]) {
        if (v!=p) {
            DFS(adj, d, v, x, c+1);
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int ans = 0;

    while (t--) {
        int n;
        cin >> n;

        int d[N]{};
        vector<vector<int>> adj(N);
        for (int i=0; i<n-1; ++i) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        DFS(adj, d, 1, -1, 0);
        int x = max_element(d, d+N)-d;
        DFS(adj, d, x, -1, 0);
        ans+=*max_element(d, d+N);
    }
    cout << ans;
}