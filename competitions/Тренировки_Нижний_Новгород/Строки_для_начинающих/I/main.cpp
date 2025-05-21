#include <iostream>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    set<char> d = {'a', 'o', 'u', 'i', 'e', 'n'};

    if (!d.count(s[n-1])) {cout <<"NO"; return 0;}

    bool flag = !d.count(s[0]);

    for (int i=1; i<n; ++i) {
        if (flag) {
            if (s[i]=='n') {cout << "NO"; return 0;}
            else if (!d.count(s[i])) {cout << "NO"; return 0;}
        }
        flag = !d.count(s[i]);
    }

    cout << "YES";





    // bool flag = !dict.count(s[0]);

    // for (int i=1; i<s.size(); ++i) {
        // if (flag && s[i]!='n') {
        //     if (!dict.count(s[i])) {cout << "NO"; return 0;}
        // }
        // if (s[i]=='n') {flag = 0;}
        // else {flag = !dict.count(s[i]);}
    // }
    // cout << "YES";
}