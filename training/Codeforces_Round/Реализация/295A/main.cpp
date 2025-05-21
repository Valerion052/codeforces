#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    long long arr[n+2]{}, dp_2[n+2]{};
    for (int i=1; i<=n; ++i) {cin >> arr[i];}

    pair<pair<int, int>, long long> p[m+2];
    for (int i=1; i<=m; ++i) {cin >> p[i].first.first >> p[i].first.second >> p[i].second;}

    int dp_1[m+2]{};
    for (int i=0; i<k; ++i) {
        int x, y; cin >> x >> y;
        ++dp_1[x]; --dp_1[y+1];
    }

    for (int i=1; i<=m; ++i) {
        dp_1[i]+=dp_1[i-1];
        long long value = dp_1[i]*p[i].second;
        dp_2[p[i].first.first]+=value;
        dp_2[p[i].first.second+1]-=value;
    }

    for (int i=1; i<=n; ++i) {
        dp_2[i]+=dp_2[i-1];
        cout << arr[i]+dp_2[i] << ' ';
    }

}