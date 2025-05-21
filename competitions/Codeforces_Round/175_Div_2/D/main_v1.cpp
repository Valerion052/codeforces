#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N=3e5+2;
const int MOD=998244353;

void BFS(int start, vector<vector<int>> &adj, int (&levels)[], int (&p)[], int (&dp)[]) {
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int v=q.front();
        q.pop();

        int sum=0;

        for (int x: adj[v]) {
            if (levels[x]<levels[v]) {continue;}

            if (v==1) {p[x]=p[v];}
            else {
                int value = dp[levels[v]] - p[v];
                if (value>=MOD) {value-=MOD;}
                if (value<0) {value+=MOD;}
                p[x] = value;
            }
            sum=(sum+p[x])%MOD;
            q.push(x);
        }
        dp[levels[v]+1] = (sum+dp[levels[v]+1])%MOD;
    }
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
        int p[N]{};
        int dp[N]{};
        levels[1]=1;
        p[1]=1;
        dp[1]=1;
        
        
        vector<vector<int>> adj(n+1);
        for (int i=2; i<=n; ++i) {
            int num;
            cin >> num;
            adj[num].push_back(i);
            adj[i].push_back(num);
            levels[i] = levels[num]+1;
        }

        BFS(1, adj, levels, p, dp);
        int ans = 0;
        for (int j=1; j<N; ++j) {
            if (dp[j]==0) {break;}
            ans = (ans%MOD+dp[j]%MOD)%MOD;
        }

        cout << ans << "\n";
    }
}
