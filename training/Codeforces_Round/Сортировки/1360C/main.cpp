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
        int _1 = 0, _2 = 0;
        for (int i=0; i<n; ++i) {cin >> arr[i]; if (arr[i]%2==0) {++_2;} else {++_1;}}

        bool flag=1;
        
        if (_1%2!=0 && _2%2!=0) {
            flag=0;
            sort(arr, arr+n);
            for (int j=1; j<n && !flag; ++j) {
                if (arr[j]-arr[j-1]==1) {--_1; --_2;}
                if (_1%2==0 && _2%2==0) {flag=1;}
            }
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}