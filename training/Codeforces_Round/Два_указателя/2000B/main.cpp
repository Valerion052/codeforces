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

        int l=arr[0]-1, r=arr[0]+1;
        bool flag=1;
        for (int j=1; j<n && flag; ++j) {
            if (arr[j]==l) {--l;}
            else if (arr[j]==r) {++r;}
            else {flag=0;}
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}