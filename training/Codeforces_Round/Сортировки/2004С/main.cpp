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
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n);

        long long ans=0;
        for (int j=0; j<n; ++j) {
            if (j%2!=0) {
                if (k>0) {
                    int v = min(arr[n-j]-arr[n-1-j], k);
                    arr[n-1-j]+=v; k-=v;
                }
                ans-=arr[n-1-j];
            }
            else {ans+=arr[n-1-j];}
        }

        cout << ans << "\n";

    }
}