#include <iostream>
#include <vector>

using namespace std;

const int N =2e5+2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >>t;
    while (t--) {
        string s; cin >> s;
        int n=s.size();

        int ans=1e9;
        vector<vector<int>> dp(n+1, vector<int>(4, 1e9));
        for (int i=n-1; i>=0; --i) {
            dp[i]=dp[i+1];
            dp[i][s[i]-'0']=i;

            if (s[i]=='1') {ans=min(ans, max(dp[i][2], dp[i][3])-i+1);}
            else if (s[i]=='2') {ans=min(ans, max(dp[i][1], dp[i][3])-i+1);}
            else {ans=min(ans, max(dp[i][1], dp[i][2])-i+1);}
        }

        if (ans>N) {cout << 0;} else {cout << ans;}
        cout << "\n";
    }


}