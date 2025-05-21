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
        int _n = (n*(n-1))/2;

        int arr[_n];
        for (int i=0; i<_n; ++i) {cin >> arr[i];}
        sort(arr, arr+_n);

        int step = n;
        for (int i=0; i<_n; i+=step) {cout << arr[i] << ' '; --step;}
        cout << arr[_n-1] << "\n";
    }
}