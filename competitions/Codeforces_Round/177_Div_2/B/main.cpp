#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int arr[6] = {0, 3, 7, 9, 10, 15};
    // auto it = upper_bound(arr, arr+5, 8);
    // int dis = distance(arr, it);

    // cout << *it << ' ' << dis;


    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;

        long long arr[n+1]{};
        for (int i=1; i<=n; ++i) {int num; cin >> num; arr[i]=arr[i-1]+num;}

        long long value = arr[n]*k-x;
        long long ans=0;

        if (value>=0) {
            for (int j=0; j<k; ++j) {
                long long local_value = value-arr[n]*j;
                if (local_value<0) {break;}

                auto it = upper_bound(arr, arr+n, local_value);
                int dis = distance(arr, it);
                ans+=dis;
            }
        }
        cout << ans << "\n";
    }
}