#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    set<char> d;
    d.insert(s[0]);
    d.insert(s[1]);

    for (int i=0; i<5; ++i) {
        string p; cin >> p;
        if (d.count(p[0]) || d.count(p[1])) {cout << "YES"; return 0;}
    }
    cout << "NO";
}