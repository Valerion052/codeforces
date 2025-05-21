#include <iostream>
#include <queue>
#include <set>

using namespace std;

int n, m;
const int N=101;
bool flag=1;
bool adj[N][N];
int couple[N]{};

void BFS(int start, bool (&visited)[], set<int> &s) {
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while (!q.empty()) {
        int v=q.front();
        q.pop();
        if (couple[v]==1) {s.insert(v);}
        for (int i=1; i<=n; ++i) {
            if (adj[v][i] && !visited[i]) {visited[i]=1; q.push(i);}
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i=0; i<m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a][b]=1;
        adj[b][a]=1;
        ++couple[a]; ++couple[b];
    }

    int ans=0;
    while (flag) {
        bool visited[N]{};
        flag=0;
        set<int> drop;
        for (int j=1; j<=n; ++j) {
            if (!visited[j]) {BFS(j, visited, drop);}}
                
                
                
        if (!drop.empty()) {
            flag=1;
            ++ans;
            for (int d: drop) {
                couple[d]=0;
                for (int k=1; k<=n; ++k) {
                    if (adj[d][k]) {
                        adj[d][k]=0; adj[k][d]=0;
                        --couple[k];
                    }
                }
            }
        }
    }

    cout << ans;

}