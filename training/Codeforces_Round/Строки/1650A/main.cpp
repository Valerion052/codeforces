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
        char c;
        cin >> s >> c;

        bool flag = 0;

        for (int i=0; i<s.size() && !flag; ++i) {
            if (s[i]==c) {
                if (i%2==0 && (s.size()-1-i)%2==0) {flag=1;}
            }
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}