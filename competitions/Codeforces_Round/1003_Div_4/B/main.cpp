#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool flag = 0;
        for (int i=1; i<s.size() && !flag; ++i) {
            if (s[i]==s[i-1]) {flag=1;}
        }
        if (flag) {cout << 1;} else {cout << s.size();}
        cout << "\n";

    }
}