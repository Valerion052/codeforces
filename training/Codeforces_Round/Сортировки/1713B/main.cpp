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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int _max = distance(arr, max_element(arr, arr+n));
        bool flag_cout = 1;

        if (_max == 0) {
            for (int j=1; j<n; ++j) {if (arr[j]>arr[j-1]) {flag_cout=0; break;}}
        }
        else if (_max == n-1) {
            for (int j=1; j<n; ++j) {if (arr[j]<arr[j-1]) {flag_cout=0; break;}}
        }
        else {
            for (int j=1; j<=_max; ++j) {if (arr[j]<arr[j-1]) {flag_cout=0; break;}}
            for (int j=_max+1; j<n; ++j) {if (arr[j]>arr[j-1]) {flag_cout=0; break;}}
        }

        if (flag_cout) {cout << "YES\n";} else {cout << "No\n";}
    }
}