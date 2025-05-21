#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    string s = "codeforces";

    while(t--) {
        char c;
        cin >> c;

        if (find(s.begin(), s.end(), c)!=s.end()) {cout << "YES\n";} else {cout << "NO\n";}

    }
}