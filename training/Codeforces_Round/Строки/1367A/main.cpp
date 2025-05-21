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

        cout << s[0];
        for (int i=1; i<s.size()-1; i+=2) {
            cout << s[i];
        }
        cout << s[s.size()-1] << '\n';
    }
}