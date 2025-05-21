#include <iostream>

using namespace std;

const int N = 101;

int n, m;
char adj[N][N];
bool visited[N][N]{};
int x_end, y_end;

void DFS(int x, int y, char p) {
    visited[x][y]=1;
    x_end = x, y_end=y;
    if (p!='S') {cout << p;}
    
    if (x>0) {if (adj[x-1][y]=='*') {if (!visited[x-1][y]) {DFS(x-1, y, 'U');}}}
    if (x<n-1) {if (adj[x+1][y]=='*') {if (!visited[x+1][y]) {DFS(x+1, y, 'D');}}}

    if (y>0) {if (adj[x][y-1]=='*') {if (!visited[x][y-1]) {DFS(x, y-1, 'L');}}}
    if (y<m-1) {if (adj[x][y+1]=='*') {if (!visited[x][y+1]) {DFS(x, y+1, 'R');}}}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> m;
    int x_start, y_start;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> adj[i][j];
            if (adj[i][j]=='S') {x_start=i, y_start=j;}
        }
    }
    DFS(x_start, y_start, 'S');

    if (x_end>0) {if (adj[x_end-1][y_end]=='S') {cout << 'U';}}
    if (x_end<n-1) {if (adj[x_end+1][y_end]=='S') {cout << 'D';}}
    if (y_end>0) {if (adj[x_end][y_end-1]=='S') {cout << 'L';}}
    if (y_end<m-1) {if (adj[x_end][y_end+1]=='S') {cout << 'R';}}
}