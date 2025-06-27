#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int x, y, k; cin >> x >> y >> k;

        int ans=y+abs(x-y);
        int v = x+min(abs(x-y), k);
        ans=min(ans, v+abs(y-v)*2);
        cout << ans << "\n";
    }

}   