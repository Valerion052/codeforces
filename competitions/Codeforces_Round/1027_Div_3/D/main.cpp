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
        pair<long long, long long> p[n];
        long long arr_x[n], arr_y[n];
        for (int i=0; i<n; ++i) {
            cin >> arr_x[i] >> arr_y[i];
            p[i].first=arr_x[i]; p[i].second=arr_y[i];
        }

        if (n==1) {cout << 1 << "\n"; continue;}
        sort(arr_x, arr_x+n);
        sort(arr_y, arr_y+n);

        long long ans=(arr_x[n-1]-arr_x[0]+1)*(arr_y[n-1]-arr_y[0]+1);

        for (auto [x, y]: p) {

            long long x_max_new = x==arr_x[n-1] ? arr_x[n-2] : arr_x[n-1];
            long long x_min_new = x==arr_x[0] ? arr_x[1] : arr_x[0];

            long long y_max_new = y==arr_y[n-1] ? arr_y[n-2] : arr_y[n-1];
            long long y_min_new = y==arr_y[0] ? arr_y[1] : arr_y[0];

            long long ans_new =(x_max_new-x_min_new+1)*(y_max_new-y_min_new+1);
            if (ans_new<n) {
                ans_new = min(
                    (x_max_new-x_min_new+2)*(y_max_new-y_min_new+1),
                    (x_max_new-x_min_new+1)*(y_max_new-y_min_new+2)
                );
            }
            ans=min(ans, ans_new);
        }
        cout << ans << "\n";
    }
}