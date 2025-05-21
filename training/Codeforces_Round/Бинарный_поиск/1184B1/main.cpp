#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;

    vector<int> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    vector<pair<int, int>> p(k+1);
    p[0]={-1, 0};
    for (int i=1; i<=k; ++i) {cin >> p[i].first >> p[i].second;}
    sort(p.begin(), p.end());
    for (int i=1; i<=k; ++i) {p[i].second+=p[i-1].second;}

    for (int x: arr) {
        auto it = upper_bound(p.begin(), p.end(), make_pair(x, 0), [](pair<int, int> x, pair<int, int> y){return x.first<y.first;});
        --it;
        cout << (*it).second << ' ';
    }
}