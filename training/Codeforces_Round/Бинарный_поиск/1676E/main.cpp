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
        int n, q;
        cin >> n >> q;

        long long arr[n];
        long long sum = 0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; sum += arr[i];}
        sort(arr, arr+n, [](int x, int y){return x>y;});
        for (int i=1; i<n; ++i) {arr[i] = arr[i-1] + arr[i];}

        while (q--) {
            long x;
            cin >> x;

            if (x > sum) {cout << -1 << '\n'; continue;}

            int l = 0, r = n, ans = 0;

            while (l<=r) {
                int c = (l+r)/2;

                if (arr[c] >= x) {r=c-1; ans = c;}
                else {l=c+1;}
            }
            cout << ans+1 << '\n';
        }
    }
}