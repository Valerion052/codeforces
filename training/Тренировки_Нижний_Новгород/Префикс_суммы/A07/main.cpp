#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    long long arr[n+1][m+1]{};

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            int x_ij;
            cin >> x_ij;
            arr[i][j] = arr[i-1][j] + x_ij;
        }
    }

    long long result = -1000000000;

    for (int _i=1; _i<=n; ++_i) {
        for (int k=_i; k<=n; ++k) {

            long long current_max = -1000000000;

            for (int _m=1; _m<=m; ++_m) {
                long long value = arr[k][_m] - arr[_i-1][_m];
                current_max = max(current_max+value, value);
                result = max(result, current_max);
            }
        }
    }

    cout << result;
}