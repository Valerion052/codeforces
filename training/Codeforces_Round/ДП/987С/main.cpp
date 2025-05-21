#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    pair<int, int> p[n];
    for (int i=0; i<n; ++i) {cin >> p[i].first;}
    for (int i=0; i<n; ++i) {cin >> p[i].second;}

    int ans=1e9;
    for (int i=1; i<n-1; ++i) {
        int _min=1e9, _max=1e9;
        for (int j=0; j<i; ++j) {if (p[j].first<p[i].first) {_min=min(_min, p[j].second);}}
        for (int j=i+1; j<n; ++j) {if (p[j].first>p[i].first) {_max=min(_max, p[j].second);}}
        ans=min(ans, _min+p[i].second+_max);
    }
    if (ans<1e9) {cout << ans;} else {cout << -1;}
}
