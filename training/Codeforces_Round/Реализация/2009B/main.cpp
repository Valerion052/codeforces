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
        for (int i=0; i<n; ++i) {cin >> arr[i];}
        for (int i=n-1; i>=0; --i) {
            if (arr[i][0]=='#') {cout << 1 << ' ';}
            else if (arr[i][1]=='#') {cout << 2 << ' ';}
            else if (arr[i][2]=='#') {cout << 3 << ' ';}
            else {cout << 4 << ' ';}
        }
        cout << "\n";
    }
}