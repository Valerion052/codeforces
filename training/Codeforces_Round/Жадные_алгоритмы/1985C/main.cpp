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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        long long dp_1[n];
        int dp_2[n];
        dp_1[0] = dp_2[0] = arr[0];
        for (int j=1; j<n; ++j) {
            dp_1[j] = dp_1[j-1] + arr[j];
            dp_2[j] = max(dp_2[j-1], arr[j]);
        }

        int ans = 0;
        for (int k=0; k<n; ++k) {
            if (dp_1[k]-dp_2[k] == dp_2[k]) {++ans;}
        }

        cout << ans << "\n";


    }
    

}