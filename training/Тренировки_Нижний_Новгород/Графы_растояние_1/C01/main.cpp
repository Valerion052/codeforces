#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int n, m, k;

set<int> find_X(vector<int> parent, vector<int> children) {


    set<int> ans;
    queue<int> q;

    for (int i=0; i<parent.size(); ++i) {
        if (children[i]==0) {q.push(i);}
    }

    while (ans.size()<k) {
        int x = q.front();
        q.pop();
        ans.insert(x);

        --children[parent[x]];
        --children[x];

        if (children[parent[x]]==0) {q.push(parent[x]);}
    }

    return ans;
}

set<int> BFS(vector<vector<int>> adj, int start) {
    queue<int> q;
    bool visited[adj.size()]{};
    q.push(start);
    visited[start] = 1;
    vector<int> parent(adj.size());
    vector<int> children(adj.size(), 0);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (auto x: adj[v]) {
            if (!visited[x]) {
                visited[x]=1;
                q.push(x);
                parent[x]=v;
                ++children[v];
            }
        }
    }

    return find_X(parent, children);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;

    int arr[n][m];
    int index = 0;
    int start = -1;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            char c;
            cin >> c;
            if (c!='#') {
                arr[i][j] = index;
                if (start==-1) {start=index;}
                ++index;
            }
            else {arr[i][j] = -1;}
        }
    }

    vector<vector<int>> adj(index);
    for (int _i=0; _i<n; ++_i) {
        for (int _j=0; _j<m; ++_j) {
            if (arr[_i][_j]!=-1) {
                if (_i>0) {
                    if (arr[_i-1][_j]!=-1) {adj[arr[_i][_j]].push_back(arr[_i-1][_j]);}
                }
                if (_i<n-1) {
                    if (arr[_i+1][_j]!=-1) {adj[arr[_i][_j]].push_back(arr[_i+1][_j]);}
                }
                 if (_j>0) {
                    if (arr[_i][_j-1]!=-1) {adj[arr[_i][_j]].push_back(arr[_i][_j-1]);}
                }
                if (_j<m-1) {
                     if (arr[_i][_j+1]!=-1) {adj[arr[_i][_j]].push_back(arr[_i][_j+1]);}
                }
            }
        }
    }

    set<int> X = BFS(adj, start);

    for (int k=0; k<n; ++k) {
        for (int d=0; d<m; ++d) {
            if (arr[k][d]<0) {cout << "#";}
            else {
                if (X.count(arr[k][d])) {cout << "X";}
                else {cout << ".";}
            }
        }
        cout << "\n";
    }

}