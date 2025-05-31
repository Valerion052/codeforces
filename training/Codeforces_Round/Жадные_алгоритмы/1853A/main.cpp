#include <iostream>

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

        bool flag=1;
        int ans=1e9+7;
        for (int i=0; i<n-1 && flag; ++i) {
            if (arr[i]>arr[i+1]) {flag=0;}
            int local_ans = (arr[i+1]-arr[i])/2+1;
            ans=min(ans, local_ans);
        }

        if (flag) {cout << ans;} else {cout << 0;} cout << "\n";
    }
}