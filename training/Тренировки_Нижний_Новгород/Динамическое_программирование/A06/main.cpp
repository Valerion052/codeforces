#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    cin >> s >> n;
    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    int ans=0;
    vector<bool> dp(s+1, 0); dp[0]=1;
    for (int i=0; i<n; ++i) {
        for (int j=s; j>=arr[i]; --j) {
            if (dp[j-arr[i]]) {ans=max(ans, j); dp[j]=1;}
        }
    }
    cout << ans;
}