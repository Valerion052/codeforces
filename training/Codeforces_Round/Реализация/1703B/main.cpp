#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        set<char> d;
        for (int i=0; i<n; ++i) {d.insert(s[i]);}
        cout << n+d.size() << "\n";
    }
}