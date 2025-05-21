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

        int it = 0;
        if (s[0] != s[1]) {
            for (int i=0; i<n-1; ++i) {
                if (s[i] < s[i+1]) {break;}
                ++it;
            }
        }

        string ans = s.substr(0, it+1);

        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}