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

        long long arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        long long dp_1[n], dp_2[n];
        dp_1[0] = max(0ll, arr[0]);
        dp_2[n-1] = abs(min(0ll, arr[n-1]));
        for (int j=1; j<n; ++j) {
            dp_1[j] = dp_1[j-1] + max(0ll, arr[j]);
            dp_2[n-1-j] = dp_2[n-j] + abs(min(0ll, arr[n-1-j]));
        }

        long long ans = 0;
        for (int k=0; k<n; ++k) {ans=max(ans, dp_1[k]+dp_2[k]);}
        cout << ans << "\n";
    }
}