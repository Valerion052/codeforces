#include <iostream>
#include <vector>

using namespace std;

int C = 0;

void DFS(int x, pair<bool, int> (&visited)[], int adj[], string &s) {
    visited[x].first=1;
    C += s[x]=='0' ? 1 : 0;
    if (!visited[adj[x]].first) {DFS(adj[x], visited, adj, s);}
    visited[x].second = C;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n;

        int adj[n+1];
        for (int i=1; i<=n; ++i) {cin >> adj[i];}
        cin >> s;
        s = "#"+s;

        pair<bool, int> visited[n+1]{};

        for (int j=1; j<=n; ++j) {
            C=0;
            if (!visited[j].first) {DFS(j, visited, adj, s);}
        }

        for (int p=1; p<=n; ++p) {cout << visited[p].second << ' ';} cout << "\n";
    }
}
