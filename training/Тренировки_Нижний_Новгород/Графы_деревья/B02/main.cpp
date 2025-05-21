#include <iostream>

using namespace std;

int n;
const int N=101;
int arr[N][N]{};
int dist[N]{};

void DFS(int x, int p) {
    dist[x] = dist[p]+arr[p][x];
    for (int v=0; v<n; ++v) {
        if (v!=p && arr[x][v]!=0) {DFS(v, x);}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int j=0; j<n-1; ++j) {
        int u, v, c;
        cin >> u >> v >> c;
        arr[u][v]=c;
        arr[v][u]=c;
    }

    
    for (int i=0; i<n; ++i) {if (arr[0][i]!=0) {DFS(i, 0);}}
    
    int ans=0;
    for (int j=0; j<n; ++j) {ans=max(ans, dist[j]);}
    cout << ans;
}