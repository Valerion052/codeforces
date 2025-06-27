#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s; s+="%$#";
        set<char>d;
        
        int ans=0;
        for (int i=0; i<s.size(); ++i) {
            if (!d.count(s[i])) {
                if (d.size()<3) {d.insert(s[i]);}
                else {d.clear(); d.insert(s[i]); ++ans;}
            }
        }
        cout << ans << "\n";
    }

}   