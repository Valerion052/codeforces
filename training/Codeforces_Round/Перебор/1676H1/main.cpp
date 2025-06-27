#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n; ++n;
        int arr[n];
        for (int i=1; i<n; ++i) {cin >> arr[i];}

        int ans=0;
        for (int i=1; i<n; ++i) {
            for (int j=i+1; j<n; ++j) {if (arr[i]>=arr[j]) {++ans;}}
        }
        cout << ans << "\n";
    }
}