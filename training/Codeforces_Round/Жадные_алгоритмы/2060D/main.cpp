#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}

        for (int j=1; j<n; ++j) {
            int value = min(arr[j-1], arr[j]);
            arr[j-1] -= value;
            arr[j] -= value;
        }

        bool flag=1;
        for (int k=0; k<n-1 && flag; ++k) {if (arr[k]!=0) {flag=0;}}

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}