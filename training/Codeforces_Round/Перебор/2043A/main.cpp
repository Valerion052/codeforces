#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;

        int ans=1;
        while (n>3) {n/=4; ans*=2;}
        cout << ans << "\n";
    }

}   