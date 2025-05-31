#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> d;
    for (int i=0; i<=500; ++i) {d.insert(i*i);}

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        if (d.count(stoi(s))) {cout << 0 << ' ' << sqrt(stoi(s));}
        else {cout << -1;}
        cout << "\n";
    }
}