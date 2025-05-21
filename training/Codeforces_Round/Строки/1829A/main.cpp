#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    char d[10] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};

    while (t--) {
        string s;
        cin >> s;
        int ans=0;
        for (int i=0; i<s.size(); ++i) {if (s[i]!=d[i]) {++ans;}}
        cout << ans << "\n";
    }
}