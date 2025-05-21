#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        sort(arr, arr+n);

        int l = 0, r=1;
        bool flag=0;
        while (l<n && r<n && !flag) {
            if (arr[r]-arr[l]==k) {flag=1;}
            else if (arr[r]-arr[l]>k) {++l;}
            else {++r;}

            if (l==r) {++r;}
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}