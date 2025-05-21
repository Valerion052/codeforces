#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, s, k;
        cin >> n >> s >> k;

        set<int> dict;
        for (int i=0; i<k; ++i) {
            int a;
            cin >> a;
            dict.insert(a);
        }

        int ans = 1e9;
        
        for (int j=0; j<=min(n-s, 1001); ++j) {
            if (!dict.count(s+j)) {ans=j; break;}
        }

        for (int p=0; p<min(s, 1001); ++p) {
            if (!dict.count(s-p)) {ans=min(ans, p); break;}
        }

        cout << ans << "\n";
    }
}