#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n = s.size();

    for (int i=n; i>1; --i) {
        for (int j=0; j+i<=n; ++j) {
            string s_copy = s.substr(j, i);
            reverse(s_copy.begin(), s_copy.end());
            if (s_copy != s.substr(j, i)) {cout << i; return 0;}
        }
    }
    cout << 0;
}