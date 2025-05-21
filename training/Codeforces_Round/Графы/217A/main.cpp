#include <iostream>
#include <vector>

using namespace std;

const int N = 1001;
bool visited[N][N]{};
bool adj[N][N]{};

void DFS(int x, int y) {

    visited[x][y]=1;

    for (int x_1=x+1; x_1<N; ++x_1) {
        if (adj[x_1][y]) {if (!visited[x_1][y]) {DFS(x_1, y);} break;}
    }
    for (int x_2=x-1; x_2>0; --x_2) {
        if (adj[x_2][y]) {if (!visited[x_2][y]) {DFS(x_2, y);} break;}
    }
    for (int y_1=y+1; y_1<N; ++y_1) {
        if (adj[x][y_1]) {if (!visited[x][y_1]) {DFS(x, y_1);} break;}
    }
    for (int y_2=y-1; y_2>0; --y_2) {
        if (adj[x][y_2]) {if (!visited[x][y_2]) {DFS(x, y_2);} break;}
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x][y] = 1;
    }

    int ans=0;
    for (int j=1; j<N; ++j) {
        for (int k=1; k<N; ++k) {
            if (adj[j][k]) {
                if (!visited[j][k]) {++ans; DFS(j, k);}
            }
        }
    }
    cout << ans-1;
}