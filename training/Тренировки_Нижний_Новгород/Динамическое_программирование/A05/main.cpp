#include <iostream>
#include <vector>

using namespace std;

const int N=8, M=8;
vector<vector<int>> dp(N, vector<int>(M, -1));
vector<vector<int>> arr(N, vector<int>(M));

long long f(int x, int y) {
    if (x>=N || y<0) {return 1e9;}
    if (x==N-1 && y==0) {return arr[x][y];}
    if (dp[x][y]!=-1) {return dp[x][y];}
    return dp[x][y]=arr[x][y]+min(min(f(x, y-1), f(x+1, y)), f(x+1, y-1));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i=0; i<N; ++i) {
        for (int j=0; j<M; ++j) {cin >> arr[i][j];}
    }
    cout << f(0, M-1);
}