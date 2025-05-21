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

        int ans = 1;
        int* _min = min_element(arr, arr+n);
        ++*_min;
        
        for (int x: arr) {ans*=x;}
        cout << ans << '\n';
    }
    
}