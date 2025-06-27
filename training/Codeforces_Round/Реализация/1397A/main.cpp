#include <iostream>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<char, int> d;

        for (int i=0; i<n; ++i) {
            string s; cin >> s;
            for (int j=0; j<s.size(); ++j) {++d[s[j]];}
        }

        bool flag = 1;
        for (auto [k, v]: d) {if (v%n!=0) {flag=0;}}

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }

}