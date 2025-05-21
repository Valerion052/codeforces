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

        sort(arr, arr+n);

        int delta = 1;
        if (n%2!=0) {cout << arr[n/2] << ' '; delta=0;}
        
        for (int j=1; j<=n/2; ++j) {
            cout << arr[n/2-j] << ' ' << arr[n/2+j - delta] << ' ';
        }
        cout << "\n";
    }
}