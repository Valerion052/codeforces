#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int n;
    cin >> n;

    int arr[n+1][n+1];
    arr[0][0]=1;
    
    cout << arr[0][0] << '\n';

    for (int i=1; i<=n; ++i) {
        arr[i][0] = arr[i][i] = 1;
        cout << arr[i][0] << ' ';
        for (int j=1; j<=i-1; ++j) {
            arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%MOD;
            cout << arr[i][j] << ' ';
        }
        cout << arr[i][i] << '\n';
    }

}