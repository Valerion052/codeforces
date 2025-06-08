#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, z; cin >> n >> z;
        int ans=0;
        for (int i=0; i<n; ++i) {int num; cin >> num; ans=max(ans, (num|z));}
        cout << ans << "\n";
    }
}
