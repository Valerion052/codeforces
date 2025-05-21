#include <iostream>
#include <vector>

using namespace std;

void DFS(vector<vector<char>> &adj, int x, int y) {
    if (x==adj.size() || adj[x][y]!='.') {return;}
    if (adj[x][y]=='.') {adj[x-1][y]='.'; adj[x][y]='*'; DFS(adj, x+1, y);}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> adj(n);
        for (int i=0; i<n; ++i) {
            string s;
            cin >> s;
            for (int j=0; j<m; ++j) {
                adj[i].push_back(s[j]);
            }
        }

        for (int _i=n-2; _i>=0; --_i) {
            for (int _j=0; _j<m; ++_j) {
                if (adj[_i][_j]=='*') {DFS(adj, _i+1, _j);}
            }
        }

        for (int _i=0; _i<n; ++_i) {
            for (int _j=0; _j<m; ++_j) {cout << adj[_i][_j];}
            cout << "\n";
        }
        cout << "\n";
    }
}