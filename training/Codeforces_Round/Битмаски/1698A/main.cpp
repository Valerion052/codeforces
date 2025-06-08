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

        int ans=-1;
        for (int i=0; i<n && ans<0; ++i) {
            int XOR=0;
            for (int j=0; j<n; ++j) {if (i!=j) {XOR^=arr[j];}}
            if (arr[i]==XOR) {ans=arr[i];}
        }
        cout << ans << "\n";
    }
}
