#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N = 500001;

vector<vector<int>> group(N), adj(N);

void DFS(int start, vector<int> &visited_adj, vector<bool> &visited_group, int &ans, int &level) {

    visited_adj[start]=level;
    ++ans;

    for (int x: adj[start]) {
        if (visited_group[x]) {continue;}
        visited_group[x]=1;
        for (int y: group[x]) {
            if (visited_adj[y]!=0) {continue;}
            DFS(y, visited_adj, visited_group, ans, level);
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    
    int index=0;
    for (int i=0; i<m; ++i) {
        int k; cin >> k;
        for (int j=0; j<k; ++j) {
            int _k; cin >> _k;
            group[index].push_back(_k);
            adj[_k].push_back(index);
        }
        ++index;
    }

    vector<bool> visited_group(m);
    vector<int> visited_adj(n+1);
    map<int, int> d;
    int level=1;
    for (int x=1; x<=n; ++x) {
        if (visited_adj[x]!=0) {continue;}
        int ans=0;
        DFS(x, visited_adj, visited_group, ans, level);
        d[level]=ans;
        ++level;
    }

    for (int p=1; p<=n; ++p) {cout << d[visited_adj[p]] << ' ';}
}