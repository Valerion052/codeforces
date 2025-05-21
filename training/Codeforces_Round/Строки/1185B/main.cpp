#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;

        bool flag = 1;
        if (s.size()>t.size()) {flag=0;}

        s = '#' + s + '#';

        int it = 1;
        for (int i=0; i<t.size() && flag; ++i) {
            if (s[it]!=t[i]) {
                if (s[it-1]!=t[i]) {flag=0;}
            }
            else {it = min((int)s.size()+1, it+1);}
        }

        if (flag && it==s.size()-1) {cout << "YES\n";} else {cout << "NO\n";}
    }
}