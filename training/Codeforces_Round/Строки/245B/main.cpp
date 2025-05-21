#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n=s.size();

    int pref, suf;
    if (s[0]=='h') {cout << "http://"; pref=4;} else {cout << "ftp://"; pref=3;}

    for (int i = pref; i<n-1; ++i) {
        if (s[i]=='r' && s[i+1]=='u' && i > pref) {suf=i; break;}
    }
    cout << s.substr(pref, suf-pref) << ".ru";
    
    if (suf+2<n) {cout << '/' << s.substr(suf+2, n-suf+2);}
}
