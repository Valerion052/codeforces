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
        int n;
        cin >> n;

        int arr[n];

        for (int i=0; i<n; ++i) {cin >> arr[i];}

        int m = arr[0];
        bool flag = true;
        
        for (int j=1; j<n; ++j) {
            if (m > arr[j] && m - arr[j]>=2) {flag=false; break;}
            m = max(m, arr[j]);
        }
        
        if (flag) {cout << "YES";} else {cout << "NO";}
        cout << '\n';

    }
}