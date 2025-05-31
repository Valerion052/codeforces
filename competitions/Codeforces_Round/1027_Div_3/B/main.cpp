#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int count_0=0, count_1=0;
        for (int i=0; i<n; ++i) {if (s[i]=='0') {++count_0;} else {++count_1;}}

        int m=n/2, y=m-k;
        bool flag=1;
        if (y<0 || y>min(count_0, count_1)) {flag=0;}
        else {
            if ((count_0-y)%2!=0) {flag=0;};
            if ((count_1-y)%2!=0) {flag=0;};  
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}