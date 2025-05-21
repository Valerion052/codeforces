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
        int n, k;
        cin >> n >> k;

        map<int, pair<int, int>> dict;
        for (int i=0; i<n; ++i) {
            int u;
            cin >> u;
            if (!dict.count(u)) {dict[u].first = i;}
            dict[u].second = i;
        }

        for (int j=0; j<k; ++j) {
            int a, b;
            cin >> a >> b;

            if (dict.count(a) && dict.count(b)) {
                if (dict[a].first < dict[b].second) {cout << "YES\n";}
                else {cout << "NO\n";}
            }
            else {cout << "NO\n";}
        }
    }
}