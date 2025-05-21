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
        string x_ij;
        cin >> x_ij;
        for (int j=1; j<=m; ++j) {
            arr[i][j] = arr[i-1][j] + (x_ij[j-1] - '0');
        }
    }

    long long result = 0;

    for (int _i=1; _i<=n; ++_i) {
        for (int k=_i; k<=n; ++k) {

            long long current_max = 0;
            int lag_value = 0;

            for (int _m=1; _m<=m; ++_m) {

                long long value = arr[k][_m] - arr[_i-1][_m];

                if (value != k-(_i-1) && value !=0) {
                    lag_value = 0;
                    continue;
                    }

                if (current_max > 0) {
                    if (lag_value == value) {current_max += value;} else {current_max = value;}
                } else {current_max = value;}
                
                lag_value = value;

                result = max(current_max, result);
            }
        }
    }

    cout << result;

}