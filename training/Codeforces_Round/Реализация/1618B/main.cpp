#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string arr[n];
        for (int i=0; i<n-2; ++i) {cin >> arr[i];}
        
        bool flag=1;
        cout << arr[0][0];
        for (int i=1; i<n-2; ++i) {
            if (arr[i-1][1]!=arr[i][0]) {cout << arr[i-1][1]; flag=0;}
            cout << arr[i][0];
        }
        cout << arr[n-3][1];
        if (flag) {cout << 'a';}
        cout << "\n";
    }
}