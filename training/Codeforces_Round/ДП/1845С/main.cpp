#include <iostream>
#include <vector>

using namespace std;

const int N=27;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int m;
        string s, l, r;
        cin >> s >> m >> l >> r;
        int n=s.size();

        vector<vector<int>> dp(n+1, vector<int>(10, -1));
        for (int i=n-1; i>=0; --i) {
            dp[i]=dp[i+1];
            dp[i][s[i]-'0']=i;
        }

        bool flag=0;
        int pos=0;
        for (int j=0; j<m && !flag; ++j) {
            bool miss=0;
            int new_pos=0;
            for (int p=l[j]-'0'; p<=r[j]-'0' && !miss; ++p) {
                int next = dp[pos][p];
                if (next==-1) {miss=1;}
                else {new_pos=max(new_pos, next);}
            }
            if (miss) {flag=1;}
            else {pos=new_pos+1;}

        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}