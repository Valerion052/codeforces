#include <iostream>
#include <algorithm>

using namespace std;

long long delta(pair<long long, long long> x) {return x.second-x.first;}

bool f(pair<long long, long long> x, pair<long long, long long> y) {
    return delta(x) > delta(y);
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

        pair<long long, long long> p[n];
        for (int i=0; i<n; ++i) {cin >> p[i].first;}
        for (int j=0; j<n; ++j) {cin >> p[j].second;}
        sort(p, p+n, f);

        int l=0, r=n-1, ans=0;
        while (l<r) {

            if (delta(p[l])+delta(p[r])>=0) {++ans; ++l; --r;}
            else {--r;}
        }
        cout << ans << "\n";
    }
}