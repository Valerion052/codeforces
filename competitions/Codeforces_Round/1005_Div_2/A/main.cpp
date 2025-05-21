#include <iostream>

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

        char flag = '1';
        int ans = 0;
        for (int i=0; i<n; ++i) {
            if (s[i]==flag) {
                ++ans;
                if (flag=='1') {flag='0';} else {flag='1';}
            }
        }
        cout << ans << "\n";
    }
}