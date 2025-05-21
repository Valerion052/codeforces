#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n=s.size();

        vector<pair<int, int>> dp_1(n+2, {0, 0}), dp_2(n+2, {0, 0});

        
        for (int i=0; i<n; ++i) {
            dp_1[i+1].first=dp_1[i].first;
            dp_1[i+1].second=dp_1[i].second;
            if (s[i]=='0') {++dp_1[i+1].first;}
            else {++dp_1[i+1].second;}
            
            dp_2[n-i].first=dp_2[n-i+1].first;
            dp_2[n-i].second=dp_2[n-i+1].second;
            if (s[n-i-1]=='0') {++dp_2[n-i].first;}
            else {++dp_2[n-i].second;}
        }
        int ans = 1e9;
        for (int j=0; j<n+1; ++j) {
            ans = min(ans, dp_1[j].first + dp_2[j+1].second);
            ans = min(ans, dp_1[j].second + dp_2[j+1].first);
        }
        cout << ans << "\n";
    }
}