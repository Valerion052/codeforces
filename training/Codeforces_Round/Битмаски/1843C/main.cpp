#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long ans=0;
        while (n>0) {ans+=n; n/=2;}
        cout << ans << "\n";
    }
}
