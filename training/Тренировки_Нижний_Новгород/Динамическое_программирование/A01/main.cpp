#include <iostream>
#include <vector>

using namespace std;

const int N=102;
const int MOD=1e9+7;
vector<vector<long long>> dp(N, vector(N, 0ll));

int C(int i, int j) {
    if (j==1 || j==i) {return dp[i][j]=1;}
    if (dp[i][j]!=0) {return dp[i][j];}
    return dp[i][j]=(C(i-1, j-1)+C(i-1, j))%MOD;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n; ++n;
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=i; ++j) {cout << C(i, j) << ' ';}
        cout << "\n";
    }
}