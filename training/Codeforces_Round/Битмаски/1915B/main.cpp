#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        map<char, int> d;
        for (int i=0; i<3; ++i) {
            string s; cin >> s;
            for (int j=0; j<3; ++j) {++d[s[j]];}
        }
        if (d['A']!=3) {cout << "A\n";}
        else if (d['B']!=3) {cout << "B\n";}
        else {cout << "C\n";}
    }
}
