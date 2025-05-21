#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        pair<long long, int> p[n];
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            p[i].first = num;
            p[i].second = i;
        }
        sort(p, p+n);

        for (int j=1; j<n; ++j) {p[j].first+=p[j-1].first;}

        pair <int, int> ans[n]{};
        for (int k=n-1; k>=0; --k) {
            ans[p[k].second].first = k;
            if (k<n-1) {
                if (p[k].first>= p[k+1].first - p[k].first) {
                    ans[p[k].second].second = ans[p[k+1].second].second+1;
                }
                else {ans[p[k].second].second=0;}
            }
            ans[p[k].second].first += ans[p[k].second].second;
        }

        for (auto v : ans) {cout << v.first << ' ';} cout << "\n";
    }
}