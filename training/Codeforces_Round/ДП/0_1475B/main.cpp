#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool dp[n+1]{};
        dp[0]=1;

        int it=2020;
        int counter = 1;
        while (it<=n) {
            ++counter;
             for (int x: {2020, 2021}) {
                while (it<=n && dp[it-x]) {dp[it]=1; ++it;}
             }
            it=2020*counter;
        }

        if (dp[n]) {cout << "YES\n";} else {cout << "NO\n";}
    }

}