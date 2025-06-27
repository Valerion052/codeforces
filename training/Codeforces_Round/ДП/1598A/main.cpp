#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        bool flag=1;
        for (int i=1; i<n && flag; ++i) {if ((a[i]-'0')+(b[i]-'0')>1) {flag=0;}}
        
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}