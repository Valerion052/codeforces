#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n+1][n+1]{};
    for (int i=0; i<m; ++i) {
        int u, v;
        cin >> u >> v;
        arr[u][v] = arr[v][u] = 1;
    }
    for (int k=1; k<=n; ++k) {
        for (int i=1; i<=n; ++i) {
            for (int j=1; j<=n; ++j) {
                if (arr[i][j]==0) {arr[i][j]=1e9;}
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    for (int x=1; x<=n; ++x) {
        for (int y=1; y<=n; ++y) {
            if (arr[x][y]>=1e9) {cout << "NO"; return 0;}
        }
    }
    cout << "YES";
}