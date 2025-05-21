#include <iostream>
#include <cstring>

using namespace std;

const int N = 200001;

void DFS(int n, char adj[3][N], bool visited[3][N], int x, int y) {

    visited[x][y] = 1;
    if (adj[x][y]=='>') {++y;}
    else if (adj[x][y]=='<') {--y;}
    visited[x][y] = 1;


    if (x==1) {if (!visited[x+1][y]) {DFS(n, adj, visited, x+1, y);}}
    if (x==2) {if (!visited[x-1][y]) {DFS(n, adj, visited, x-1, y);}}
    if (y>1 && y<=n) {if (!visited[x][y-1]) {DFS(n, adj, visited, x, y-1);}}
    if (y>=1 && y<n) {if (!visited[x][y+1]) {DFS(n, adj, visited, x, y+1);}}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        char adj[3][N]{};
        bool visited[3][N]{};

        int n;
        string s_1, s_2;
        cin >> n >> s_1 >> s_2;

        for (int i=1; i<=n; ++i) {adj[1][i] = s_1[i-1];}
        for (int j=1; j<=n; ++j) {adj[2][j] = s_2[j-1];}

        adj[1][1]='#';
        DFS(n, adj, visited, 1, 1);

        if (visited[2][n]) {cout << "YES\n";} else {cout << "NO\n";}
    }
}