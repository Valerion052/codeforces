#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> target = {'T', 'i', 'm', 'u', 'r'};
        bool flag=1;
        if (n!=5) {flag=0;}

        for (int i=0; i<n && flag; ++i) {
            if (!target.count(s[i])) {flag=0;}
            else {target.erase(s[i]);}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}