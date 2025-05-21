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
        int n, k, x;
        cin >> n >> k >> x;

        int arr[n+1]{};
        for (int i=1; i<=n; ++i) {cin >> arr[i];}
        sort(arr, arr+n+1);
        for (int j=1; j<=n; ++j) {arr[j]+=arr[j-1];}

        int ans=-1e9;
        for (int _k=0; _k<=k; ++_k) {
            int l=n-_k;
            int r=max(0, l-x);
            ans=max(ans, arr[r]-(arr[l]-arr[r]));
        }
        cout << ans << "\n";
    }
}