#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<int, int>> rows, queue;;
    for (int i=0; i<n; ++i) {
        int num;
        cin >> num;
        rows.insert({num, i+1});
    }

    string s;
    cin >> s;

    for (int i=0; i<2*n; ++i) {

        if (s[i] == '0') {
            cout << (*rows.begin()).second << ' ';
            queue.insert(*rows.begin());
            rows.erase(*rows.begin());
        } else {
            cout << (*queue.rbegin()).second << ' ';
            queue.erase(*queue.rbegin());
        }
    }

    // for (auto x: rows) {
    //     cout << x.first << " - " << x.second << endl;
    // }


}