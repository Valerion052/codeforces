#include <iostream>
#include <map>
#include <cctype>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, pair<int, int>> dict;

        for (int i=0; i<n; ++i) {
            char search = tolower(s[i]);
            if (s[i]-'0' < 49) {++dict[search].second;}
            else {++dict[search].first;}
        }

        int ans = 0;
        
        for (auto x: dict) {
            int _min = min(dict[x.first].first, dict[x.first].second);
            int _max = max(dict[x.first].first, dict[x.first].second);
            
            ans+=_min;
            if (k>0) {
                int value = (_max - _min)/2;
                ans+=min(value, k);
                k-=min(value, k);
            }
        }
        cout << ans << '\n';
    }
}