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
        bool flag=0;

        if (s[0]=='2') {
            if (s[1]=='0') {
                if (s[2]=='2' && s[n-1]=='0') {flag=1;}
                else if (s.substr(2, 2)=="20") {flag=1;}
                else if (s.substr(n-2, 2)=="20") {flag=1;}
            }
            else if (s.substr(n-3, 3)=="020") {flag=1;}
        }
        if (s.substr(n-4, 4)=="2020" && !flag) {flag=1;}

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}