#include <iostream>

using namespace std;

const int N =8;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string ans="";
        for (int i=0; i<N; ++i) {
            string s; cin >> s;
            for (int j=0; j<N; ++j) {if (s[j]!='.') {ans+=s[j];}}
        }
        cout << ans << "\n";
    }
}