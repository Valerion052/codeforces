#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int dp[n];
        int ans=0;
        for (int i=0; i<n; ++i) {
            if (i<1) {cin >> dp[i]; ++ans;}
            else {
                int num;
                cin >> num;
                if (num >= dp[i-1]) {
                    if (num==dp[i-1]) {++num;}
                    ++ans;
                }
                else {num=dp[i-1];}
                dp[i]=num;
            }
        }

        // for (int x: dp) {cout << x << ' ';}
        cout << ans << '\n';
    }
}