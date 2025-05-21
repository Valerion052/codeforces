#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s, c;
        cin >> s;

        set<int> d;
        for (int i=0; i<m; ++i) {int num; cin >> num; d.insert(num);}
        cin >> c;

        sort(c.begin(), c.end());

        int it=0;
        for (int j=0; j<n; ++j) {
            if (d.count(j+1)) {
                cout << c[it];
                ++it;
            }
            else {cout << s[j];}
        }
        cout << "\n";
    }
}