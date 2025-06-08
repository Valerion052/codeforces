#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s_1, s_2; cin >> s_1 >> s_2;

        map<char, int> d;
        for (int i=0; i<s_1.size(); ++i) {d[s_1[i]]=i+1;}
        
        int ans=0;
        for (int i=1; i<s_2.size(); ++i) {
            ans+=abs(d[s_2[i]]-d[s_2[i-1]]);
        }
        cout << ans << "\n";
    }
}
