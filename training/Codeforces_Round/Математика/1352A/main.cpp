#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<string> ans;

        for (int i=s.size()-1; i>=0; --i) {
            if (s[i]!='0') {
                string _s;
                _s.append(1, s[i]);
                _s.append(s.size()-1-i, '0');
                ans.push_back(_s);
            }
        }

        cout << ans.size() << '\n';
        for (auto x: ans) {cout << x << ' ';}
        cout << '\n';
    }
}
