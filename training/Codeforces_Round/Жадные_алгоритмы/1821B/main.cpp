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

        int arr[n], _arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        for (int j=0; j<n; ++j) {cin >> _arr[j];}

        int l=0, r=n-1;

        for (int k=0; k<n; ++k) {
            if (k>0) {if (_arr[k-1]>_arr[k]) {l=k;}}
            if (arr[k]!=_arr[k]) {break;}
        }

        for (int d=l; d<n-1; ++d) {if (_arr[d+1]<_arr[d]) {r=d; break;}}
        cout << l+1 << ' ' << r+1 << "\n";
    }
    
}