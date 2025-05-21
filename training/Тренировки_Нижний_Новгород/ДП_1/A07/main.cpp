#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n+1][m+1]{};
    arr[1][1]=1;

    for (int i=2; i<=n; ++i) {
        for (int j=2; j<=m; ++j) {
            arr[i][j] = arr[i-2][j-1] + arr[i-1][j-2];
        }
    }

    cout << arr[n][m];
}