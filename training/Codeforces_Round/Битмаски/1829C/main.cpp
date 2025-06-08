#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> d;
        d[0]=d[1]=d[2]=d[3]=1e9;
        for (int i=0; i<n; ++i) {
            int m;
            string s;
            cin >> m >> s;
            d[(s[1]-'0')*(1<<0)+(s[0]-'0')*(1<<1)]=min(d[(s[1]-'0')*(1<<0)+(s[0]-'0')*(1<<1)], m);
        }
        int ans = min(d[3], d[1]+d[2]);
        if (ans>1e6) {cout << -1;} else {cout << ans;} cout << "\n";
    }
}
