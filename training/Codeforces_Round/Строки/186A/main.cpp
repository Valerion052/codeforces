#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s_1, s_2;
    cin >> s_1 >> s_2;

    s_1+="#", s_2+="#";
    s_1="#"+s_1, s_2="#"+s_2;

    bool flag_ans=1;
    bool flag_continue=1;
    int l=0, r=s_1.size()-1;

    if (s_1.size()!=s_2.size()) {flag_ans=0;}

    while (l<r && flag_ans) {

        if (s_1[l]==s_2[l]) {++l;}
        if (s_1[r]==s_2[r]) {--r;}

        if (s_1[l]!=s_2[l] && s_1[r]!=s_2[r]) {
            if (!flag_continue) {flag_ans=0; break;}
            if (s_1[r]!=s_2[l] || s_1[l]!=s_2[r]) {flag_ans=0;}
            else {flag_continue=0; ++l; --r;}
        }
    }
    if (flag_ans) {cout << "YES";} else {cout << "NO";}
}