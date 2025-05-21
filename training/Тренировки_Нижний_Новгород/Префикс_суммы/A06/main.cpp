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
            arr[i][j] = x_ij;
        }
    }

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            {arr[i][j] = arr[i][j] + arr[i][j-1];}
        }
    }

    for (int j=1; j<=m; ++j) {
        for (int i=1; i<=n; ++i) {
            {arr[i][j] = arr[i][j] + arr[i-1][j];}
        }
    }

    int q;
    cin >> q;

    while (q--) {
        long long x_1, y_1, x_2, y_2;
        cin >> x_1 >> y_1 >> x_2 >> y_2;

        if (x_1 > x_2) {swap(x_1, x_2);}
        if (y_1 > y_2) {swap(y_1, y_2);}

        long long sum = arr[x_2][y_2] - arr[x_1-1][y_2] - arr[x_2][y_1-1] + arr[x_1-1][y_1-1];
        
        cout << sum << '\n';
    }

    
    






}