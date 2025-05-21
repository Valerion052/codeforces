#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int arr[n+1];
        for (int i=0; i<n; ++i) {
            arr[i+1]=arr[i] + (s[i]=='B' ? 1 : 0);
        }

        int ans=1e9;
        for (int j=1; j<=n; ++j) {
            int value = k-(arr[min(j+k-1, n)]-arr[j-1]);
            ans=min(ans, value);
        }
        cout << ans << "\n";
    }
}