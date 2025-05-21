#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5+7;
vector<vector<int>> arr(2, vector<int>(N, 0));
vector<vector<long long>> dp(2, vector<long long>(N, -1));


long long f(int row, int index) {
    if (index<2) {return 0;}
    if (dp[row][index]!=-1) {return dp[row][index];}
    return dp[row][index] = max(f(row, index-1), f(1-row, index-1)+arr[row][index]);

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    
    for (int i=2; i<=n+1; ++i) {cin >> arr[0][i];}
    for (int i=2; i<=n+1; ++i) {cin >> arr[1][i];}

    cout << max(f(0, n+1), f(1, n+1));


    
}