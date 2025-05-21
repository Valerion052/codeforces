#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int it = 1;
    int ans = 0;

    for (int i=0; i<n; ++i) {
        int l, r;
        cin >> l >> r;

        ans += (l-it)%k +(r-l+1);
        it=r+1;
    }

    cout << ans;
}