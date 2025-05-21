#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        s+='#';
        bool flag=1;
         
        set<char> d;
        for (int i=1; i<=n && flag; ++i) {
            if (s[i]!=s[i-1]) {
                d.insert(s[i-1]);
                if (d.count(s[i])) {flag=0;}
            }
        }
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}
