#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<set<int>> arr(n+1);
    for (int i=0; i<m; ++i) {
        int _n, _m;
        cin >> _n >> _m;

        arr[_n].insert(_m);
        arr[_m].insert(_n);
    }

    for (int k=1; k<arr.size(); ++k) {
        set<int> counter;
        // cout << k << ": {";
        for (auto x: arr[k]) {
            // cout << x << ", ";
            for (auto y: arr[x]) {
                if (y!=k) {
                    if (!arr[k].count(y)) {
                        counter.insert(y);
                    }
                }
            }
        }
        // cout << "}\n";
        
        cout << counter.size() << '\n';
    }
        
}
