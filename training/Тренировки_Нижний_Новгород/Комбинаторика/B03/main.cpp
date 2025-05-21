#include <iostream>

using namespace std;

long long C(int n, int k) {
    if (k > n - k) k = n - k;
    long long ans = 1;
    for (int i = 1; i <= k; i++) {
        ans = ans*(n - i + 1)/i;
    }
    return ans;
}

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    int lower = max(4, t-m);
    int upper = min(n, t-1);
    long long ans = 0;

    for (int i=lower; i<=upper; ++i) {
        ans+= C(n, i) * C(m, t-i);
    }

    cout << ans;
}