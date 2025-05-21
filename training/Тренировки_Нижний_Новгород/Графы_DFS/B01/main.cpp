#include <iostream>
#include <vector>

using namespace std;

const int N = 201;
vector<int> adj[N];
bool visited[N]{};
int C = 0;

void DFS(int u) {
    visited[u]=1;
    for (int v: adj[u]) {
        if (!visited[v])
        DFS(v);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int leng[201]{};

    for (int i=1; i<=n; ++i) {
        int k;
        cin >> k;
        while (k--) {
            int v;
            cin >> v;
            v+=n;
            ++leng[v];
            adj[i].push_back(v);
            adj[v].push_back(i);

        }        
    }

    int start = n+1;
    for (int k=n+2; k<=n+m; ++k) {
        if (leng[k]>leng[start]) {start=k;}
    }


    DFS(start);
    for (int j=1; j<=n; ++j) {
        if (!visited[j]) {++C; DFS(j);}
    }

    cout << C;
}