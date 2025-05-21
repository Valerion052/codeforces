#include <iostream>
#include <vector>

using namespace std;

bool check(vector<pair<int, int>> &p, int c) {
    int n = p.size();
    pair<int, int> start={0, 0};

    for (int i=0; i<n; ++i) {
        start.first = max(start.first - c, p[i].first);
        start.second = min(start.second + c, p[i].second);
        if (start.first>start.second) {return 0;}
    }
    return 1;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<pair<int, int>> p(n);
        for (int i=0; i<n; ++i) {cin >> p[i].first >> p[i].second;}

        int l=0, r=1e9, ans=0;
        while (l<=r) {
            int c = (l+r)/2;
            if (check(p, c)) {r=c-1; ans=c;}
            else {l=c+1;}
        }
        cout << ans << "\n";
    }
}