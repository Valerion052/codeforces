#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n=s.size();
        char open=s[0], close=s[n-1];
        
        if (open==close) {cout << "NO\n"; continue;}
        
        bool flag=1;
        int count_open=0, count_close=0;
        for (int i=0; i<s.size() && flag; ++i) {
            if (s[i]==open) {++count_open;}
            else if (s[i]==close) {++count_close;}
            else {++count_open;}
            if (count_close>count_open) {flag=0;}
        }
        if (count_open!=count_close) {flag=0;}

        if (!flag) {
            flag=1;
            int count_open=0, count_close=0;
            for (int i=0; i<s.size() && flag; ++i) {
                if (s[i]==open) {++count_open;}
                else if (s[i]==close) {++count_close;}
                else {++count_close;}
                if (count_close>count_open) {flag=0;}
            }
            if (flag && count_open!=count_close) {flag=0;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
}
