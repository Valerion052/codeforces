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

        int lag = -1;
        bool flag=1;
        for (int j=0; j<n && flag; ++j) {
            if (arr[j]/10>=lag && arr[j]/10<=arr[j]%10) {lag=arr[j]%10;}
            else if (arr[j]>=lag) {lag=arr[j];}
            else {flag=0;}
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}