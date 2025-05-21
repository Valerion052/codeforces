#include <iostream>

using namespace std;

const int MOD = 1e9+7;
int ans[200][200]{0};

void Pascal(int n) {
    ans[1][1] = 1;
    for (int i=2; i<=n; ++i) {
        for (int j=1; j<=i; ++j) {
            if (!ans[i][j]) {
                ans[i][j] = (long long)(ans[i-1][j-1] + ans[i-1][j])%MOD;
            }
            else {ans[i][j]=0;}
        }
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i=0; i<k; ++i) {
        int x, y;
        cin >> x >> y;
        ans[x+y-1][y]=1;
    } 

    Pascal(n+m-1);
    cout << ans[n+m-1][m];
}