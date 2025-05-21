#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool flag = 0;

void DFS(vector<set<int>> &adj, bool (&visited)[], int x) {
    visited[x]=1;

    if (adj[x].size()==1) {flag=1;}

    for (int v: adj[x]) {
        if (!visited[v]) {DFS(adj, visited, v);}
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
        cin >> n;

        int arr[n+1];
        vector<set<int>> adj(n+1);
        for (int i=1; i<=n; ++i) {
            cin >> arr[i];
            adj[i].insert(arr[i]);
            adj[arr[i]].insert(i);
        }

        bool visited[n+1]{};
        int _0=0, _1=0;
        for (int j=1; j<=n; ++j) {
            flag=0;
            if (!visited[j]) {
                DFS(adj, visited, j);
                if (flag) {++_1;} else {++_0;}
            }
        }
        int min=_0, max=_0+_1;
        if (_1>0) {++min;}

        cout << min << ' ' << max << "\n";
        

    }
}