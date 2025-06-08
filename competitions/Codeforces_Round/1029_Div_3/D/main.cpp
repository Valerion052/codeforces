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

        int value=arr[1]-arr[0];
        bool flag=1;
        for (int i=2; i<n && flag; ++i) {if (arr[i]-arr[i-1]!=value) {flag=0;}}

        int row = arr[0]-value;
        if (row%(n+1)!=0 && flag) {flag=0;}

        int f = row/(n+1);
        int F = f+value;
        if (f<0||F<0) {flag=0;}

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}
