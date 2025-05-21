#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        int ans = abs(k/p) + (k%p==0 ? 0 : 1);

        if (ans>n) {cout << -1;} else {cout << ans;} cout << "\n";

    }
}