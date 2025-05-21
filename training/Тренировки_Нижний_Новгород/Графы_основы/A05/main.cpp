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
        int _n, _m;
        cin >> _n >> _m;
        arr[_n][_m]=arr[_m][_n]=1;
    }

    for (int j=1; j<=n; ++j) {
        for (int k=1; k<=n; ++k) {cout << arr[j][k] << ' ';}
        cout << '\n';
    }
}