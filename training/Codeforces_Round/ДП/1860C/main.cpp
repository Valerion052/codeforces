#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int it_win=1e9;
        int _min=1e9;
        int ans=0;
        for (int i=0; i<n; ++i) {
            _min=min(_min, arr[i]);
            if (_min<arr[i]) {
                if (arr[i]<it_win) {++ans;}
                it_win=min(it_win, arr[i]);
            }
        }
        cout << ans << "\n";
    }
}