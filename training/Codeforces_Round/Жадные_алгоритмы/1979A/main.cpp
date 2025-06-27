#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int ans=1e9;
        for (int i=1; i<n; ++i) {ans=min(ans, max(arr[i], arr[i-1]));}
        cout << ans-1 << "\n";

    }
}