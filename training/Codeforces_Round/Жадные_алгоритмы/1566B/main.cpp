#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s; s+='#';

        int ans=0;
        for (int i=1; i<s.size(); ++i) {
            if (s[i]!=s[i-1]) {ans+=1-(s[i-1]-'0');}
        }
        cout << min(2, ans) << "\n";
    }
}