#include <iostream>

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

        int arr_a[n], arr_b[n];
        for (int i=0; i<n; ++i) {cin >> arr_a[i];}
        for (int j=0; j<n; ++j) {cin >> arr_b[j];}

        bool flag_plus = 0, flag_minus = 0, flag_ans = 1;
        for (int k=0; k<n && flag_ans; ++k) {
            
            if (arr_b[k] > arr_a[k]) {
                if (!flag_plus) {flag_ans=0;}
            }
            else if (arr_b[k] < arr_a[k]) {
                if (!flag_minus) {flag_ans=0;}
            }

            if (!flag_plus) {flag_plus = arr_a[k]>0 ? 1 : 0;}
            if (!flag_minus) {flag_minus = arr_a[k]<0 ? 1 : 0;}
        }

        if (flag_ans) {cout << "YES\n";} else {cout << "NO\n";}
    }
    
}