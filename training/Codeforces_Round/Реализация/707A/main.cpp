#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    set<char> s;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            char c; cin >> c;
            s.insert(c);
        }
    }

    bool flag=1;

    if (s.size()>3) {flag=0;}
    else {
        for (char x: s) {
            if (x=='C' || x=='M' || x=='Y' ) {flag=0; break;}
        }
    }
    if (flag) {cout << "#Black&White";} else {cout << "#Color";}


}