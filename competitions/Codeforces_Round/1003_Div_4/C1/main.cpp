#include <iostream>

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

        int arr_n[n], _m;
        for (int i=0; i<n; ++i) {cin >> arr_n[i];}
        cin >> _m;
        arr_n[0] = min(arr_n[0], _m - arr_n[0]);

        bool flag = 1;
        for (int j=1; j<n && flag; ++j) {

            if (arr_n[j]>=arr_n[j-1]) {
                if (_m-arr_n[j]>=arr_n[j-1]) {
                    arr_n[j] = min(arr_n[j], _m - arr_n[j]);
                }
            }
            else {
                if (_m-arr_n[j]>=arr_n[j-1]) {
                    arr_n[j] = _m - arr_n[j];
                }
                else {flag=0;}
            }
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}