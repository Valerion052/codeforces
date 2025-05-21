#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char d[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    int t; cin>>t;
    while (t--) {
        string s; cin >> s;

        for (int i=0; i<8; ++i) {
            if (d[i]!=s[0]) {cout << d[i] << s[1] << "\n";}
        }
        for (int i=1; i<9; ++i) {
            if (i!=s[1]-'0') {cout << s[0] << i << "\n";}
        }
    }
}