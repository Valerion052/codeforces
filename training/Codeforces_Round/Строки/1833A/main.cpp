#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        set<string> d;
        int ans=0;
        for (int i=1; i<n; ++i) {
            string v = s.substr(i-1, 2);
            if (!d.count(v)) {++ans; d.insert(v);}
        }
        cout << ans << "\n";
    }
}