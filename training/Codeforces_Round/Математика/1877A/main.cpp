#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans=0;
        for (int i=0; i<n-1; ++i) {int x; cin >> x; ans+=x;}
        cout << 0-ans << "\n";
    }
}