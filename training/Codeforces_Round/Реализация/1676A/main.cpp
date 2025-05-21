#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int a=0, b=0;
        for (int i=0; i<3; ++i) {
            a+=(s[i]-'0');
            b+=(s[5-i]-'0');
        }

        if (a==b) {cout << "YES\n";} else {cout << "NO\n";}
    }
}