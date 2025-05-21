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

        string ans_1 = "", ans_2 = "";

        for (int i=0; i<n; ++i) {
            if (s[i]=='0') {ans_1+="0"; ans_2+="0";}
            else {
                if (ans_1==ans_2) {
                    if (s[i]=='1') {ans_1+="1"; ans_2+="0";}
                    if (s[i]=='2') {ans_1+="1"; ans_2+="1";}
                }
                else {
                    if (s[i]=='1') {ans_1+="0"; ans_2+="1";}
                    if (s[i]=='2') {ans_1+="0"; ans_2+="2";}
                }
            }
        }
        cout << ans_1 << "\n" << ans_2 << "\n";
    }
}