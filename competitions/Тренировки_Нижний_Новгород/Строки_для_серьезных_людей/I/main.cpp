#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s[8];

    for (int _i=0; _i<8; ++_i) {cin >> s[_i];}

    for (int i=0; i<8; ++i) {
        for (int j=1; j<8; ++j) {
            if (s[i][j-1]==s[i][j]) {cout << "NO"; return 0;}
        }
    }

    cout << "YES";
}