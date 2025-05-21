#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        string s;
        map<char, int> ab;
        cin >> ab['0'] >> ab['1'] >> s;

        ab['?'] = 0;
        int n = s.size();
        bool flag = true;

        for (int i=0; i<s.size()/2; ++i) {

            if (s[i]!=s[n-1-i]) {
                if (s[i]=='?') {
                    s[i]=s[n-1-i];
                    ab[s[i]]-=2;
                }
                else if (s[n-1-i]=='?') {
                    s[n-1-i]=s[i];
                    ab[s[i]]-=2;
                }
                else {flag = false; break;}
            } else {
                if (s[i]=='?') {ab[s[i]]+=2;}
                else {ab[s[i]]-=2;}
            }
        }

        if (n%2!=0) {
            if (s[n/2]=='?') {++ab['?'];}
            else {--ab[s[n/2]];}
        }

        for (int j=0; j<s.size()/2 && flag; ++j) {
            if (s[j]=='?') {
                if (ab['0'] > 1) {
                    s[j]=s[n-1-j]='0';
                    ab['0']-=2;
                    ab['?']-=2;
                }
                else if (ab['1'] > 1) {
                    s[j]=s[n-1-j]='1';
                    ab['1']-=2;
                    ab['?']-=2;
                }
            }
        }
        
        if (n%2!=0) {
            if (s[n/2] == '?') {
                if (ab['0'] == 1) {
                    s[n/2]='0';
                    --ab['0'];
                    --ab['?'];
                }
                else if (ab['1'] == 1) {
                    s[n/2]='1';
                    --ab['1'];
                    --ab['?'];
                }
            }
        }
        
        // cout << flag << ' ';
        
        if (flag && ab['0']==0 && ab['1']==0 && ab['?']==0) {flag=true;} else {flag=false;}

        if (flag) {cout << s;} else {cout << -1;}
        cout << '\n';
        
        // cout << s << '\n';
        // for (auto x: ab) {cout << x.first << " - " << x.second << '\n';}

    }
}