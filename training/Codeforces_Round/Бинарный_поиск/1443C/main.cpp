#include <iostream>
#include <vector>

using namespace std;

bool check( vector<pair<int, int>> &p, int c) {

    long long sum=0;
    for (int i=0; i<p.size() && sum<=c; ++i) {
        if (p[i].first>c) {sum+=p[i].second;}
    }
    return sum<=c;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {

        int n; cin >> n;

        vector<pair<int, int>> p(n);
        int _max=0;
        for (int i=0; i<n; ++i) {cin >> p[i].first; _max=max(_max, p[i].first);}
        for (int i=0; i<n; ++i) {cin >> p[i].second;}

        int l=0, r=_max, ans=0;
        while (l<=r) {
            int c=(l+r)/2;
            if (check(p, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }

        cout << ans << "\n";
    }
}