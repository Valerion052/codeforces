#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans=0;
        for (int i=0; i<n; ++i) {ans=max(ans, s[i]-'a'+1);}
        cout << ans << "\n";
    }
}