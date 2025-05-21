#include <iostream>
#include <vector>

using namespace std;


void DFS(vector<vector<int>> &adj, int x, int y, int &ans) {
    ans+=adj[x][y];
    adj[x][y]=0;

    if (x>0) {if (adj[x-1][y]>0) {DFS(adj, x-1, y, ans);}}
    if (x<adj.size()-1) {if (adj[x+1][y]>0) {DFS(adj, x+1, y, ans);}}
    if (y>0) {if (adj[x][y-1]>0) {DFS(adj, x, y-1, ans);}}
    if (y<adj[x].size()-1) {if (adj[x][y+1]>0) {DFS(adj, x, y+1, ans);}}
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

        vector<vector<int>> adj(n, vector<int>(m));
        int ans=0;

        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                cin >> adj[i][j];
            }
        }

        for (int _i=0; _i<n; ++_i) {
            for (int _j=0; _j<m; ++_j) {
                if (adj[_i][_j]>0) {
                    int local_ans=0;
                    DFS(adj, _i, _j, local_ans);
                    ans=max(ans, local_ans);
                }
            }
        }
        cout << ans << "\n";








    }
}