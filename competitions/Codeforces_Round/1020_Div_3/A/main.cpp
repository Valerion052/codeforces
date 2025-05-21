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
        string s;
        cin >> n >> s;

        int _1=0, _0=0;
        for (int i=0; i<n; ++i) {if (s[i]=='1') {++_1;} else {++_0;}}

        int ans = _1*(_1-1) + _0*(_1+1);
        cout << ans << "\n"; 
    }
}