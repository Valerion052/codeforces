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

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int ans=0;
        for (int j=1; j<n; ++j) {
            if (arr[j-1]>arr[j]) {++ans; ++j;}
        }

        cout << ans << '\n';
    }
}