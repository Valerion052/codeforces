#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, pair<int, int>> d;

        for (int i=1; i<=n; ++i) {
            int num; cin >> num;
            if (d[num].first==0) {d[num].first=d[num].second=i;}
            else {d[num].second=i;}
        }

        bool flag=0;
        for (auto [x, y]: d) {
            if (y.first!=y.second && y.second-y.first>1) {flag=1; break;}
        }

        if (flag) {cout << "YES\n";} else {cout << "NO\n";}
    }


}