#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        long long arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n);

        int count=0;
        int ans=0;
        for (int j=n-1; j>=0; --j) {
            ++count;
            if (count*arr[j]>=x) {++ans; count=0;}
        }
        cout << ans << "\n";
    }
}
