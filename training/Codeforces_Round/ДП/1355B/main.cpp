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
        int n;
        cin >> n;

        map<int, int> d;
        for (int i=0; i<n; ++i) {int c; cin >> c; ++d[c];}

        int ans=0, mod=0;
        for (auto [k, v]: d) {
            ans+=(v+mod)/k;
            mod=(v+mod)%k;
        }
        cout << ans << "\n";
    }
}
