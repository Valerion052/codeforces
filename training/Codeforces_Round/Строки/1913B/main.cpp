#include <iostream>
#include <map>

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
        int n = s.size();

        map<char, int> dict = {{'0', 0}, {'1', 0}};
        
        for (int i=0; i<n; ++i) {
            if (s[i]=='0') {++dict['1'];}
            else {++dict['0'];}
        }

        int ans = 0;
        for (int j=0; j<n; ++j) {
            if (dict[s[j]]>0) {--dict[s[j]];}
            else {
                ans = n-j;
                break;
            }
        }
        cout << ans << "\n";
    }
}