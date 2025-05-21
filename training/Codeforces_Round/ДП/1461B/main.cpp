#include <iostream>
#include <vector>

using namespace std;

int n, m;
const int N=501, M=501;
vector<vector<char>> adj(N, vector<char>(M));

int f(int x, int y, vector<vector<int>> &dp) {

    if (dp[x][y]!=-1) {return dp[x][y];}
    if (adj[x][y]=='.') {return dp[x][y]=0;}
    if (x==n-1 || y==0 || y==m-1) {return dp[x][y]=1;}
    
    return dp[x][y]=1+min(min(f(x+1, y-1, dp), f(x+1, y, dp)), f(x+1, y+1, dp));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        cin >> n >> m;

        for (int i=0; i<n; ++i) {
            string s; cin >> s;
            for (int j=0; j<m; ++j) {
                adj[i][j]=s[j];
            }
        }

        int ans=0;
        vector<vector<int>> dp(N, vector<int>(M, -1));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                ans+=f(i, j, dp);
            }
        }
        cout << ans << "\n";

        // for (int i=0; i<n; ++i) {
        //     for (int j=0; j<m; ++j) {
        //         cout << dp[i][j] << ' ';
        //     }
        //     cout << "\n";
        // }
        // cout << "\n\n\n\n\n";
    }
}
