#include <iostream>
#include <algorithm>

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

        sort(s.begin(), s.end());
        for (char x: s) {cout << x;}
        cout << '\n';
    }
}