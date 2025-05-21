#include <iostream>
#include <vector>

using namespace std;

int _counter(int arr[], vector<int> d, int n, int k) {
    int ans=0;
    for (int i=0; i<n; ++i) {
        if (d[arr[i]]>0 && (k-arr[i]>0)) {
            --d[arr[i]];
            if (d[k-arr[i]]>0) {
                ++ans;
                --d[k-arr[i]];
            }
            else {++d[arr[i]];}

        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        vector<int> d(101, 0);
        for (int i=0; i<n; ++i) {cin >> arr[i]; ++d[arr[i]];}

        int ans=0;
        for (int k=2; k<=100; ++k) {
            ans=max(ans, _counter(arr, d, n, k));
        }
        cout << ans << "\n";
    }
}