#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<char, char> dict = {{'Y', 'e'}, {'e', 's'}, {'s', 'Y'}};

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        bool flag;
        if (dict.count(s[0])) {flag=1;} else {flag=0;}

        for (int i=0; i<s.size()-1 && flag; ++i) {
            if (dict[s[i]]!=s[i+1]) {flag=0; break;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}