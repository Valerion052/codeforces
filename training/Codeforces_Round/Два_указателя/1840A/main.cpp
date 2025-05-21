#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int it = 0;
        for (int i=1; i<n; ++i) {
            if (s[i]==s[it]) {
                cout << s[it];
                it = i+1; ++i;
            }
        }
        cout << "\n";
    }
}