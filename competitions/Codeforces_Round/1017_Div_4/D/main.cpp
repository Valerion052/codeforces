#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int n_p = p.size(), n_s = s.size();
        p+='#'; s+='!';

        vector<pair<char, int>> a, b;
        pair<char, int> _a = {p[0], 1}, _b = {s[0], 1};
        
        for (int i=1; i<=n_p; ++i) {
            if (p[i]==p[i-1]) {++_a.second;}
            else {a.push_back(_a); _a = {p[i], 1};}
        }
        for (int j=1; j<=n_s; ++j) {
            if (s[j]==s[j-1]) {++_b.second;}
            else {b.push_back(_b); _b = {s[j], 1};}
        }

        // for (int k=0; k<a.size(); ++k) {cout << a[k].first << ' ' << a[k].second << ' ';}

        bool flag=a.size()==b.size() ? 1: 0;

        for (int k=0; k<a.size() && flag; ++k) {
            if (a[k].first!=b[k].first) {flag=0;}
            if (b[k].second<a[k].second || b[k].second>a[k].second*2) {flag=0;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}

    }
}