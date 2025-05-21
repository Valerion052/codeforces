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
        int n, m;
        cin >> n >> m;

        int arr_n[n], arr_m[m];
        for (int i=0; i<n; ++i) {cin >> arr_n[i];}
        for (int j=0; j<m; ++j) {cin >> arr_m[j];}
        sort(arr_m, arr_m+m);
        arr_n[0] = min(arr_n[0], arr_m[0] - arr_n[0]);


        bool flag = 1;
        for (int k=1; k<n && flag; ++k) {
            int* _m = lower_bound(arr_m, arr_m+m, arr_n[k]+arr_n[k-1]);

            if (arr_n[k]>=arr_n[k-1]) {
                if (_m!=arr_m+m) {
                    if (*_m-arr_n[k]>=arr_n[k-1]) {
                        arr_n[k] = min(arr_n[k], *_m - arr_n[k]);
                    }
                }
            }
            else {
                if (_m!=arr_m+m) {
                    if (*_m-arr_n[k]>=arr_n[k-1]) {
                        arr_n[k] = *_m - arr_n[k];
                    }
                    else {flag=0;}
                }
                else {flag=0;}
            }
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}