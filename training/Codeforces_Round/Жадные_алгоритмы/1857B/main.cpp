#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        string _s = "0"+s;

        bool flag_print = 0;
        bool flag;
        if (_s[n]-'0'>=5) {flag=1; _s[n]='0';} else {flag=0;}
        
        int last_value = -1;

        for (int i=n-1; i>=0; --i) {
            int value = _s[i]-'0';
            if (flag) {++value; flag_print=1;}

            if (value>=5) {
                last_value=i;
                flag=1;
                _s[i]='0';
                }
            else {flag=0; _s[i] = value + '0';}
        }

        if (last_value>0) {for (int j=last_value; j<=n; ++j) {_s[j]='0';}}
        if (_s[0]=='0') {_s.erase(_s.begin());}

        if (flag_print) {cout << _s;} else {cout << s;} cout << "\n";
    }
}