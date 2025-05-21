#include <bits/stdc++.h>
using namespace std;

const long long INF = 4e18;

int n;
vector<long long> price;
vector<string> s, revs;
vector<array<long long,2>> dp;

long long dfs(int i, int prevFlip) {
    if (i == n) return 0;

    long long &memo = dp[i][prevFlip];
    if (memo != -1) return memo;

    const string &prev = prevFlip ? revs[i-1] : s[i-1];
    long long best = INF;

    if (s[i]   >= prev)
        best = min(best, dfs(i+1, 0));

    if (revs[i] >= prev)
        best = min(best, price[i] + dfs(i+1, 1));

    return memo = best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> n)) return 0;
    price.resize(n);
    s.resize(n);
    revs.resize(n);
    dp.assign(n, {-1, -1});

    for (long long &x : price) cin >> x;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        revs[i] = s[i];
        reverse(revs[i].begin(), revs[i].end());
    }

    long long ans = min(dfs(1, 0),
                        price[0] + dfs(1, 1));

    cout << (ans >= INF ? -1 : ans) << '\n';
    return 0;
}
