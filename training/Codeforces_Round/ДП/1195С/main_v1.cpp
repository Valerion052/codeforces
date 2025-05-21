#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+7;
vector<vector<int>> arr(2, vector<int>(N, 0));
vector<vector<long long>> dp(2, vector<long long>(N, 0));

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    
    for (int i=2; i<=n+1; ++i) {cin >> arr[0][i];}
    for (int i=2; i<=n+1; ++i) {cin >> arr[1][i];}

    for (int j=2; j<=n+1; ++j) {
        dp[0][j] = max(dp[0][j-1], dp[1][j-1]+arr[0][j]);
        dp[1][j] = max(dp[1][j-1], dp[0][j-1]+arr[1][j]);
    }
    cout << max(dp[0][n+1], dp[1][n+1]);


    
}