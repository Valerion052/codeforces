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
        for (int i=0; i<1<<8 && ans==-1; ++i) {
            int value=0;
            for (int j=0; j<n; ++j) {value^=(arr[j]^i);}
            if (value==0) {ans=i;}
        }
        cout << ans << "\n";
    }
}
