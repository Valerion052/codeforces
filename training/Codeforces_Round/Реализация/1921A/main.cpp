#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y) {
    if (x.first==y.first) {return x.second>y.second;}
    return x.first<y.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        pair<int, int> p[4];
        for (int i=0; i<4; ++i) {cin >> p[i].first >> p[i].second;}
        sort(p, p+4, f);
        cout << (p[0].second-p[1].second) * (p[2].first-p[1].first) << "\n";
    }
}