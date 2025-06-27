#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void DFS(vector<vector<int>> &adj, vector<int> &d, vector<int> &ans, int x) {

    bool flag=1;
    for (int y: adj[x]) {
        if (d[y]!=1) {flag=0;}
        DFS(adj, d, ans, y);
    }
    if (d[x]==1 && flag) {ans.push_back(x);}
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    vector<vector<int>> adj(n+1);
    vector<int> d(n+1);
    int start=-1;
    for (int i=1; i<=n; ++i) {
        int p; cin >> p >> d[i];
        if (p<0) {start=i;}
        else {adj[p].push_back(i);}
    }

    vector<int> ans;
    DFS(adj, d, ans, start);
    if (ans.empty()) {cout << -1; return 0;}
    sort(ans.begin(), ans.end());
    for (int x: ans) {cout << x << ' ';}
}