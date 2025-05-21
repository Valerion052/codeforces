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
        long long x, y;
        cin >> n >> x >> y;

        int arr[n];
        long long sum=0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; sum+=arr[i];}
        sort(arr, arr+n);

        long long ans = 0;
        for (int j=0; j<n; ++j) {

            if (sum-arr[j]<=x) {continue;}
            long long r = max(1ll, sum-arr[j] - x);
            long long l = max(1ll, sum-arr[j] - y);

            int* it_l = lower_bound(arr+j+1, arr+n, l);
            int* it_r = upper_bound(arr+j+1, arr+n, r);

            int dist_l = distance(arr, it_l);
            int dist_r = distance(arr, it_r);

            ans+=(dist_r-dist_l);
        }
        cout << ans << "\n";

        
        
    }
}