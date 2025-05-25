#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while (t--) {
        string s; cin >> s;

        bool flag=0;
        for (int i=1; i<s.size() && !flag; ++i) {
            if (s[i-1]!=s[i]) {flag=1; swap(s[i-1], s[i]);}
        }
        if (flag) {cout << "YES\n" << s << "\n";}
        else {cout << "NO\n";}
        
    }
}