#include <iostream>
#include <cctype>

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

        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {cout << "YES\n";}
        else {cout << "NO\n";}

    }
}