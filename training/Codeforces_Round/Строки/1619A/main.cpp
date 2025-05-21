#include <iostream>

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

        bool flag = 1;
        if (n%2!=0) {flag=0;}
        
        for (int i=0; i<n/2 && flag; ++i) {
            if (s[i] != s[n/2+i]) {flag=0;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }
    

}