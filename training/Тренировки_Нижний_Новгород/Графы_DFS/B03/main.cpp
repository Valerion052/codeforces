#include <iostream>

using namespace std;

const int N = 10001;
int adj[N]{};

int DFS(int x, bool visited[]) {
    visited[x]=1;
    if (!visited[adj[x]]) {
        return DFS(adj[x], visited);
    }
    return adj[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=1; i<=n; ++i) {
        int p;
        cin >> p;
        adj[i]=p;
    }

    for (int i=1; i<=n; ++i) {
        bool visited[n+1]{};
        cout << DFS(i, visited) << ' ';
    }

}