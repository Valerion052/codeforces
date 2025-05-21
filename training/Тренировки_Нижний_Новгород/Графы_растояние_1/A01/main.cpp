#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n+1][n+1]{};
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int k=1; k<=n; ++k) {
        for (int _i=1; _i<=n; ++_i) {
            for (int _j=1; _j<=n; ++_j) {
                arr[_i][_j] = min(arr[_i][_j], arr[_i][k]+arr[k][_j]);
            }
        }
    }

    for (int x=1; x<=n; ++x) {
        for (int y=1; y<=n; ++y) {
            cout << arr[x][y] << ' ';
        }
        cout << "\n";
    }

}
