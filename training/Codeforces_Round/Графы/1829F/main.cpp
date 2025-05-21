#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> adj[n+1];
        for (int i=0; i<m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int _1=0, _2=0;
        for (int j=1; j<=n; ++j) {if(adj[j].size()==1) {_1=j; break;}}
        for (int k: adj[adj[_1][0]]) {if(adj[k].size()!=1) {_2=k; break;}}

        cout << adj[_2].size() << ' ' << adj[adj[_1][0]].size()-1 << "\n";
    }
}