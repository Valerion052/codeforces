#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        s="#"+s+"#";

        vector<int> ans;
        
        for (int i=1; i<s.size()-3; ++i) {
            if (s.substr(i, 3)=="one") {
                if (s[i-1]=='o') {s[i+1]='#'; ans.push_back(i+1);}
                else {s[i]='#'; ans.push_back(i);}
            }
            else if (s.substr(i, 3)=="two") {
                if (s[i+3]=='o') {s[i+1]='#'; ans.push_back(i+1);}
                else {s[i+2]='#'; ans.push_back(i+2);}
            }
        }
        // cout << ans.size() << ' ' << s  << "\n";
        cout << ans.size()  << "\n";
        for (int x: ans) {cout << x << ' ';} cout << "\n";

    }

}
