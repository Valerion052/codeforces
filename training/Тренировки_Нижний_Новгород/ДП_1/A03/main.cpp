#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int ans[102][102];

void Pascal(int n) {

    cout << 1 << '\n';
    for (int i=2; i<=n+1; ++i) {
        ans[i][1]=ans[i][i]=1;
        cout << ans[i][1] << ' ';
        for (int j=2; j<i; ++j) {
            ans[i][j] = (long long)(ans[i-1][j-1] + ans[i-1][j])%MOD;
            cout << ans[i][j] << ' ';
        }
        cout << ans[i][i] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    Pascal(n);
}