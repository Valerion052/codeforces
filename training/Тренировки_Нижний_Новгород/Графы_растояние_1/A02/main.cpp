#include <iostream>

using namespace std;
const int inf = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n][n]{};

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cin >> arr[i][j];
            if (arr[i][j]==-1) {arr[i][j]=inf;}
        }
    }

    for (int k=0; k<n; ++k) {
        for (int _i=0; _i<n; ++_i) {
            for (int _j=0; _j<n; ++_j) {
                arr[_i][_j] = min(arr[_i][_j], arr[_i][k]+arr[k][_j]);
            }
        }
    }

    int r = 1e9, d=0;

    for (int x=0; x<n; ++x) {
        int e = -1;
        for (int y=0; y<n; ++y) {
            e=max(e, arr[x][y]);
            d = max(d, arr[x][y]);
        }
        r = min(r, e);
    }
    
    cout << d << ' ' << r;

}