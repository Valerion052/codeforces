#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int* _max = max_element(arr, arr+n);
        int ans = *_max+n/2;
        if (n%2!=0) {
            for (int j=0; j<n; ++j) {
                if (*_max==arr[j] && (j+1)%2!=0) {++ans; break;}
            }
        }

        cout << ans << '\n';
    }
}