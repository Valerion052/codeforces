#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N=3e5+2;
const int MOD=998244353;

int add(int x, int y) {
    x += y;
    if (x >= MOD) {x -= MOD;}
    if (x < 0) {x+=MOD;}
    return x;
}


int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;

        
        int levels[N]{};
        levels[1]=1;
        int p[n+1];
        vector<vector<int>> adj(n+1);
        for (int i=2; i<=n; ++i) {
            cin >> p[i];
            levels[i] = levels[p[i]]+1;
            adj[levels[i]].push_back(i);
        }

        vector<int> dp(n+1), tot(n+1);
        dp[1] = tot[1] = 1;

        for (int j=2; j<=n; ++j) {
            for (int x: adj[j]) {
                dp[x] = add(tot[levels[x]-1], levels[x] == 2 ? 0 : -dp[p[x]]);
                tot[levels[x]] = add(tot[levels[x]], dp[x]);
            }
        }

        int ans = 0;
        for (int k=1; k<=n; ++k) {
            ans=add(ans, dp[k]);
        }
        cout << ans << "\n";
    }
}
