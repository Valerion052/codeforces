#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int row_1 = 1, row_2 = 1, sum = 0;

    if (n == 1 || n == 2) {cout << 1;}
    else {
        for (int i=2; i<n; ++i) {
            sum=(long long)(row_1+row_2)%MOD;
            row_1 = row_2;
            row_2 = sum;
        }
        cout << sum;
    }
}