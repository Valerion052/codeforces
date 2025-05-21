#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    map<int, pair<int, int>> result;
    set<int> rows;

    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        rows.insert(i+1);
        result[i+1] = {num, num};
    }

    int m;
    cin >> m;

    for (int j=0; j<m; ++j) {
        int type;
        cin >> type;

        if (type==1) {

            int p, x;
            cin >> p >> x;

            while(x) {
                auto it = rows.lower_bound(p);

                if (it == rows.end()) {x = 0; continue;}

                int value = result[*it].first;

                result[*it].first = max(0, value-x);
                x = max(0, x - value);

                if (result[*it].first == 0) {rows.erase(it);}

            }
        }
        else {
            int p;
            cin >> p;
            cout << result[p].second - result[p].first << '\n';
        }

    }

}