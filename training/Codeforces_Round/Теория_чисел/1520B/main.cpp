#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> d;

void make_d() {
    for (int i=1; i<=9; ++i) {
        long long v=0;
        for (int j=0; j<=9; ++j) {
            v=v*10+i;
            d.push_back(v);
        }
    }
    sort(d.begin(), d.end());
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    make_d();

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;

        auto it = lower_bound(d.begin(), d.end(), n);
        int ans = it-d.begin();
        if (n==*it) {++ans;}
        cout << ans << "\n";
    }
}