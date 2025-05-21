#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s, c;
        cin >> s >> c;
        c+="#";

        int it=0;
        for (int i=0; i<s.size(); ++i) {
            if (s[i]==c[it] || s[i]=='?') {
                if (s[i]=='?') {
                    if (it<c.size()-1) {s[i]=c[it];}
                    else {s[i]='a';}
                }
                it=min(it+1, (int)c.size()-1);
            }
        }
        if (it==c.size()-1) {cout << "YES\n" << s << "\n";} else {cout << "NO\n";}
    }
}