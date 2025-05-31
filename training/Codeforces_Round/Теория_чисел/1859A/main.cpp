#include <iostream>
#include <algorithm>

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
        
        sort(arr, arr+n);
        int ans=-1;
        for (int i=1; i<n && ans==-1; ++i) {if (arr[i-1]!=arr[i]) {ans=i;}}

        if (ans==-1) {cout << -1 << "\n";}
        else {
            cout << ans << ' ' << n-ans << "\n";
            for (int i=0; i<ans; ++i) {cout << arr[i] << ' ';} cout << "\n";
            for (int i=ans; i<n; ++i) {cout << arr[i] << ' ';} cout << "\n";
        }
    }
}