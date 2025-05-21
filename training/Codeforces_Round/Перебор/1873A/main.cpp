#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    string d[4] = {"abc", "bac", "acb", "cba"};
    while(t--) {
        string s; cin >> s;
        bool flag=0;
        for (int i=0; i<4 && !flag; ++i) {if (s==d[i]) {flag=1;}}
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}
