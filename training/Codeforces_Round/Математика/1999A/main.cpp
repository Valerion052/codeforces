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
        cout << (s[0]-'0') + (s[1]-'0') << "\n";
    }
}
