#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        s = "R"+s+"R";

        int ans=0;
        int lag=s.size()-1;

        for (int i=s.size()-1; i>=0; --i) {

            if (s[i]=='R') {
                ans=max(ans, lag-i);
                lag=i;
            }
        }

        cout << ans << "\n";
    }    
}