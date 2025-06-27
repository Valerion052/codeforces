#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n+2]{};
        for (int i=1; i<=n; ++i) {cin >> arr[i];}

        int l=1, r=n;
        while (l<r) {
            if (arr[l]!=arr[r]) {
                bool f_l = arr[l]==arr[l-1];
                bool f_r = arr[r]==arr[r+1];
                if (f_l || f_r) {swap(arr[l], arr[r]);}
            }
            ++l; --r;
        }
        int ans=0;
        for (int i=1; i<=n; ++i) {ans+=arr[i]==arr[i+1];}
        cout << ans << "\n";
    }

}   