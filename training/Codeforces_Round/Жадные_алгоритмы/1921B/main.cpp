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
        cin >> n;
        string s, f;
        cin >> s >> f;
        int add = 0, drop = 0;

        for (int i=0; i<n; ++i) {
            if (s[i] != f[i]) {
                if (f[i] == '1') {++add;}
                else {++drop;}

            }
        }
        cout << max(add, drop) << '\n';
    }
}




// 10011001
// 11111110

// 00001
// 11110