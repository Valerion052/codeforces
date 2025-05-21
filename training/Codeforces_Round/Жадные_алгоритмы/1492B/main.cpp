#include <iostream>
#include <algorithm>

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

        int arr[n], dp[n];
        for (int i=0; i<n; ++i) {
            cin >> arr[i];
            dp[i] = i==0 ? arr[i] : max(dp[i-1], arr[i]);
        }

        int r=n-1;
        for (int j=n-1; j>=0; --j) {
            if (arr[j]==dp[j]) {
                for (int l=j; l<=r; ++l) {cout << arr[l] << ' ';}
                r=j-1;
            }
        }
        if (r>=0) {for (int l=0; l<=r; ++l) {cout << arr[l] << ' ';}}
        cout << "\n";
    }
}