#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long arr[n][m];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            int x_ij;
            cin >> x_ij;
            arr[i][j] = x_ij;
        }
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (j>0) {arr[i][j] = arr[i][j] + arr[i][j-1];}
        }
    }

    for (int j=0; j<m; ++j) {
        for (int i=0; i<n; ++i) {
            if (i>0) {arr[i][j] = arr[i][j] + arr[i-1][j];}
        }
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }




}