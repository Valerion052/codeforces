#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool f(pair<int, int> x, pair<int, int> y, int d[]) {

    if (x.second == y.second) {
        return d[x.first] > d[y.first];
    }
    return x.second < y.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int dict[n+1]{};
    for (int i=1; i<=n; ++i) {cin >> dict[i];}

    int ans = 0;
    for (int j=0; j<m; ++j) {
        int x, y;
        cin >> x >> y;
        ans+=min(dict[x], dict[y]);
    }

    cout << ans;

}