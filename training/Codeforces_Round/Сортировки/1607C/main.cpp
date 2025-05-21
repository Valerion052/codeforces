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
        cin >> n;

        long long arr[n];

        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n);
        
        long long ans = arr[0];
        long long local_sum = -arr[0];
        for (int j=1; j<n; ++j) {
            arr[j]+=local_sum,
            local_sum-=arr[j];
            ans=max(ans, arr[j]);}

        cout << ans << "\n";
    }
}