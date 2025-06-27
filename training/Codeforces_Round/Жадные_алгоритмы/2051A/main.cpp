#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; int b[n+1]{};
        for (int i=0; i<n; ++i) {cin >> a[i];}
        for (int i=0; i<n; ++i) {cin >> b[i];}

        int ans=0;
        for (int i=0; i<n; ++i) {
            if (a[i]>b[i+1]) {ans+=a[i]-b[i+1];}
        }
        cout << ans << "\n";
    }
}