#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<string> arr(n);
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    vector<int> mask(k);
    iota(mask.begin(), mask.end(), 0);

    int ans=1e9;
    do {
        int _min = 1e9, _max=0;
        for (string x: arr) {
            int v=0;
            for (int y: mask) {v = v*10 + x[y]-'0';}
            _min=min(_min, v);
            _max=max(_max, v);
        }
        ans=min(ans, _max-_min);

    } while (next_permutation(mask.begin(), mask.end()));

    cout << ans;
}