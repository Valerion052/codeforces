#include <iostream>

using namespace std;

const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        --n;

        long long ans = 1;
        ans = (ans*(n+2)%MOD)%MOD;
        ans = (ans*(4*n+3)%MOD)%MOD;
        ans = (ans*(n+1)%MOD)%MOD;
        ans = (ans*337)%MOD;

        cout << ans << "\n";
    }
    
}