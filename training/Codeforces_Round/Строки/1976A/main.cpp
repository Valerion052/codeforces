#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string s_1="", s_2="";

        for (int i=0; i<n && s_2==""; ++i) {
            if (s[i]-'a'>=0) {s_2=s.substr(i, n-i);}
            else {s_1+=s[i];}
        }

        bool flag=1;
        for (int i=0; i<s_2.size() && flag; ++i) {if (s_2[i]-'a'<0) {flag=0;}}
        for (int i=1; i<s_2.size() && flag; ++i) {if (s_2[i]-'a'<s_2[i-1]-'a') {flag=0;}}
        for (int i=1; i<s_1.size() && flag; ++i) {if (s_1[i]-'0'<s_1[i-1]-'0') {flag=0;}}
        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }

}