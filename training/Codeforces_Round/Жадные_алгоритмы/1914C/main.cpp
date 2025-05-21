#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr_a[n+1]{}, arr_b[n+1]{};

        for (int i=1; i<=n; ++i) {
            int a;
            cin >> a;
            arr_a[i] = arr_a[i-1] + a;
        }
        for (int j=1; j<=n; ++j) {
            int b;
            cin >> b;
            arr_b[j] = max(arr_b[j-1], b);
        }

        int ans = 0;
        for (int p=1; p<=n && p<=k; ++p) {
            int value = arr_a[p] + (k-p)*arr_b[p];
            ans = max(ans, value);
        }

        cout << ans << "\n";
    }
}