#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;

long long modpow(long long base, long long exp, long long mod) {
    base %= mod;
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        long long arr[n]{};
        long long sum_all = 0;
        for (int i=0; i<n; ++i) {
            cin >> arr[i]; 
            sum_all = (sum_all + arr[i]) % MOD;
        }
        sum_all = (sum_all + MOD) % MOD;

        long long local_max = -1000000000, global_max = 0;

        for (int j=0; j<n; ++j) {
            local_max = max(local_max+arr[j], arr[j]);
            global_max = max(global_max, local_max);
            }

        if (global_max <= 0) {
            cout << sum_all << '\n';
        } else {
            global_max %= MOD;
            long long power = modpow(2, k, MOD);
            long long multiplier = (power - 1 + MOD) % MOD;
            long long ans = (sum_all + (global_max * multiplier) % MOD) % MOD;
            cout << ans << '\n';
        }

    }
}