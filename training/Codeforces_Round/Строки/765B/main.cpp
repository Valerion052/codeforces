#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    bool flag=1;
    set<char> d;
    int c = 49;
    for (int i=0; i<s.size() && flag; ++i) {
        if (!d.count(s[i])) {
            if (s[i]-'0'!=c) {flag=0;}
            else {
                d.insert(s[i]);
                ++c;
            }
        }
    }
    if (flag) {cout << "YES\n";} else {cout << "NO\n";}
}

