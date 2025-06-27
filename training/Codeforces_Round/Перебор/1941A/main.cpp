#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[m];
        for (int i=0; i<n; ++i) {cin >> a[i];}
        for (int i=0; i<m; ++i) {cin >> b[i];}
        sort(a, a+n); sort(b, b+m);

        int* start = lower_bound(a, a+n, k);
        if (*start==k || start==a+n) {--start;}

        int ans=0;
        for (int i=0; i<=start-a; ++i) {
            // cout << a[i] << " " << *upper_bound(b, b+m, k-a[i]) << "\n";
            ans+=upper_bound(b, b+m, k-a[i])-b;
        }
        cout << ans << "\n";
    }

}