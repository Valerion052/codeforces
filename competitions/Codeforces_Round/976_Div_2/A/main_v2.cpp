#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        int ans = 0;
        cin >> n >> k;

        if (k==1 || k>n) {
            cout << n << endl;
            continue;
            }
        while (n>0) {
            ans += n%k;
            n /= k;
        }

        cout << ans << endl;
    }
}
