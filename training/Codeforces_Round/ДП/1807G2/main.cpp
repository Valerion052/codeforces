#include <iostream>
#include <algorithm>

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
        sort(arr, arr+n);

        long long sum=1;
        bool flag=arr[0]==1 ? 1 : 0;
        for (int i=1; i<n && flag; ++i) {
            if (arr[i]>sum) {flag=0;}
            sum+=arr[i];
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}







    }
}