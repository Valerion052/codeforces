#include <iostream>
#include <vector>

using namespace std;

const int N=51, M=51;
int n, m;
vector<vector<int>> dp(N, vector<int>(M, -1));

long long f(int x, int y) {
    if (x<0 || y<0) {return 0;}
    if (x==0 && y==0) {return 1;}
    if (dp[x][y]!=-1) {return dp[x][y];}
    return dp[x][y]=f(x-1, y-2)+f(x-2, y-1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    cout << f(n-1, m-1);
    



}