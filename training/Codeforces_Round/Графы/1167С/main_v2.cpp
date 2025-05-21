#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int N = 500001;

vector<vector<int>> adj(N);

void DFS(int start, vector<int> &visited, int &ans, int &level) {
    visited[start]=level;
    ++ans;
    for (int x: adj[start]) {
        if (visited[x]!=0) {continue;}
        DFS(x, visited, ans, level);
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
        int k, first;
        cin >> k;
        if (k>0) {
            cin >> first;
            for (int j=1; j<k; ++j) {
                int _k; cin >> _k;
                adj[_k].push_back(first);
                adj[first].push_back(_k);
            }
        }
        ++index;
    }

    int level=1;
    map<int, int> d;
    vector<int> visited(n+1, 0);
    for (int x=1; x<=n; ++x) {
        if (visited[x]!=0) {continue;}
        int ans=0;
        DFS(x, visited, ans, level);
        d[level]=ans;
        ++level;
    }
    for (int p=1; p<=n; ++p) {
        cout << d[visited[p]] << ' ';
    }
}