#include <iostream>
#include <vector>

using namespace std;

int n;
const int N = 1001;
bool adj[N][N]{};
bool visited[N][N]{};

void DFS(int x, int y) {
    visited[x][y]=1;

    if (x>1) {if (!adj[x-1][y] && !visited[x-1][y]) {DFS(x-1, y);}}
    if (x<n) {if (!adj[x+1][y] && !visited[x+1][y]) {DFS(x+1, y);}}

    if (y>1) {
        if (!adj[x][y-1] && !visited[x][y-1]) {DFS(x, y-1);}
        if (x>1) {if (!adj[x-1][y-1] && !visited[x-1][y-1]) {DFS(x-1, y-1);}}
        if (x<n) {if (!adj[x+1][y-1] && !visited[x+1][y-1]) {DFS(x+1, y-1);}}
    }

    if (y<n) {
        if (!adj[x][y+1] && !visited[x][y+1]) {DFS(x, y+1);}
        if (x>1) {if (!adj[x-1][y+1] && !visited[x-1][y+1]) {DFS(x-1, y+1);}}
        if (x<n) {if (!adj[x+1][y+1] && !visited[x+1][y+1]) {DFS(x+1, y+1);}}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

    int x_diag_1 = ax-(ay-1), y_diag_1 = 1;
    int x_diag_2 = ax - (n-ay), y_diag_2 = n;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n; ++j) {
            if (i==ax) {adj[i][j]=1;}
            if (j==ay) {adj[i][j]=1;}
            if (i==x_diag_1 && j==y_diag_1) {adj[i][j]=1; ++x_diag_1; ++y_diag_1;}
            if (i==x_diag_2 && j==y_diag_2) {adj[i][j]=1; ++x_diag_2; --y_diag_2;}
        }
    }

    DFS(bx, by);

    if (visited[cx][cy]) {cout << "YES";} else {cout << "NO";}
}