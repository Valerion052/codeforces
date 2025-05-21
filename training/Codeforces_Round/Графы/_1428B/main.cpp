#include <iostream>
#include <vector>

using namespace std;

int ans;

int DFS(int x, vector<vector<int>> &adj, bool (&visited)[]) {
    visited[x]=1;
    for (auto v: adj[x]) {
        if (!visited[v]) {DFS(x, adj, visited);}
        else {++ans;}
    }
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
        cin >> n >> s;

        ans = 0;
        bool visited[n]{};
        vector<vector<int>> adj(n);
        for (int i=0; i<n; ++i) {
            if (s[i]=='>') {adj[i].push_back(i+1<n ? i+1 : 0);}
            else if (s[i]=='<') {adj[i].push_back(i-1>=0 ? i-1 : n-1);}
            else {
                adj[i].push_back(i+1<n ? i+1 : 0);
                adj[i].push_back(i-1>=0 ? i-1 : n-1);
                adj[i+1<n ? i+1 : 0].push_back(i);
                adj[i-1>=0 ? i-1 : n-1].push_back(i);
            }
        }

    for (int j=0; j<n; ++j) {
        if (!visited)

    }





    }


}