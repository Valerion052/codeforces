#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    bool obstacle[n+m][n+m]{};
    int arr[n+m+1][n+m];

    for (int _k=0; _k<k; ++_k) {
        int k_i, k_j; 
        // cin >> k_i >> k_j;
        cin >> k_i >> k_j;
        obstacle[k_i+k_j-1][k_i] = 1;
    }

    arr[1][1] =1;

    for (int i=2; i<=n+m-1; ++i) {
        
        if (i>2) {
            arr[i][1] = arr[i-1][1];
            arr[i][i] = arr[i-1][i-1];
        }
        else {arr[i][1] = arr[i][i] = 1;}

        if (obstacle[i][1]) {arr[i][1]=0;}
        if (obstacle[i][i]) {arr[i][i]=0;}

        // cout << arr[i][1] << ' ';

        for (int j=2; j<i; ++j) {
            if (!obstacle[i][j]) {
                arr[i][j] = (arr[i-1][j-1] + arr[i-1][j])%MOD;
            }
            else {arr[i][j]=0;}
            // cout << arr[i][j] << ' ';
        }
        // cout << arr[i][i] << '\n';
    }

    // for (auto x: arr[n+m-1]) {cout << x << ' ';}

    cout << arr[n+m-1][n];

}