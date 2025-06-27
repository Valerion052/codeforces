#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;

        int ans = 0;
        if (n%2!=0) {n-=k; ++ans;}
        if (n>0) {ans+=n/(k-1)+min(1, n%(k-1));}
        cout << ans << "\n";
    }

}   