#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s, t;
        int n;
        cin >> n >> s >> t;

        bool flag_1=0, flag_ans=1;

        for (int i=0; i<n && flag_ans; ++i) {
            if (s[i]=='1') {flag_1=1;}
            if (t[i]=='1') {
                if (flag_1) {break;}
                else {flag_ans=0;}
            }
        }

        if (flag_ans) {cout << "YES\n";} else {cout << "NO\n";}
    }    
}