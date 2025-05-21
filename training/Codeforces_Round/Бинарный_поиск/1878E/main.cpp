#include <iostream>
#include <vector>

using namespace std;

const int N=30;

int value(vector<vector<int>> &dp, int start, int r) {
    int ans=0;
    for (int i=0; i<N; ++i) {
        bool flag = dp[r][i]-dp[start-1][i] == r-start+1;
        if (flag) {ans |= 1<<i;}
    }
    return ans;
}

bool check (vector<vector<int>> &dp, int start, int c, int k) {
    return value(dp, start, c) >= k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int> arr(n);
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        vector<vector<int>> dp(n+1, vector(N, 0));
        for (int j=1; j<=n; ++j) {
            for (int p=0; p<N; ++p) {
                dp[j][p] = dp[j-1][p] + ((arr[j-1]>>p)&1);
            }
        }

        int q; cin >> q;
        while (q--) {
            int start, k;
            cin >> start >> k;

            int _l=start, _r=n, ans=0;
            while (_l<=_r) {
                int c=(_l+_r)/2;
                if (check(dp, start, c, k)) {_l=c+1; ans=c;}
                else {_r=c-1;}
            }
            if (ans>0) {cout << ans;} else {cout << -1;} cout << ' ';
        }
        cout << "\n";
    }   
}