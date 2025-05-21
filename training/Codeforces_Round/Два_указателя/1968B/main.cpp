#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string s_n, s_m;
        cin >> n >> m >> s_n >> s_m;

        int it=0, ans=0;
        for (int i=0; i<m && it<n; ++i) {
            if (s_m[i]==s_n[it]) {++ans, ++it;}
        }
        cout << ans << "\n";
    }
}