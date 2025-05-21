#include <iostream>

using namespace std;

const int N = 1e6+1e4;
const int a = 2020;
const int b = 2021;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool dp[N]{}; dp[0]=1;
    for (int i=0; i<=1e6; ++i) {
        if (dp[i]) {dp[i+a]=dp[i+b]=1;}
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if (dp[n]) {cout << "YES\n";} else {cout << "NO\n";}
    }
}
