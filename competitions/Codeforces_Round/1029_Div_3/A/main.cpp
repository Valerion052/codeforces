#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int arr[n];
        bool ans=1;
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int l, r;
        for (int i=0; i<n; ++i) {if (arr[i]==1) {l=i; break;}}
        r=l+x;
        
        if (r<n) {
            for (int i=r; i<n && ans; ++i) {if (arr[i]==1) {ans=0;}}
        }
        
        if (ans) {cout << "YES\n";} else {cout << "NO\n";}

    }
}
