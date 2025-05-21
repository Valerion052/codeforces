#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    if (x.first==y.first) {return x.second<y.second;}
    return x.first<=y.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        pair<int, int> p[n];
        for (int i=0; i<n; ++i) {cin >> p[i].first >> p[i].second;}
        sort(p, p+n, f);

        string ans = "";
        bool flag=true;
        int _x = 0, _y = 0;

        for (int j=0; j<n; ++j) {
            if (_x<=p[j].first) {
                ans.append(p[j].first-_x, 'R');
                if (_y<=p[j].second) {
                    ans.append(p[j].second-_y, 'U');
                }
                else {flag=false; break;}
            }
            else {flag=false; break;}
            _x = p[j].first;
            _y = p[j].second;
        }

        if (flag) {cout << "YES\n" << ans << "\n";} else {cout << "NO\n";}
    }
}

