#include <iostream>
#include <vector>

using namespace std;

const int N=1e5+1;

int n, m;
int ans=0;
vector<int> dp(N, -1);
vector<vector<int>> adj(N);

int DFS(int x) {
    if (dp[x]!=-1) {return dp[x];}
    dp[x]=0;
    for (int y: adj[x]) {
        dp[x]=max(dp[x], DFS(y)+1);
    }
    ans=max(ans, dp[x]);
    return dp[x];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i=0; i<m; ++i) {
        int b, c; cin >> b >> c;
        adj[b].push_back(c);
    }

    for (int i=1; i<=n; ++i) {if (dp[i]==-1) {DFS(i);}}
    cout << ans;
}