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

        int l=0, r=n/2, ans=0;

        while (l<=r) {
            int c = (l+r)/2;
            if (c*4 <= n) {l=c+1; ans=c;}
            else {r = c-1;}
        }

        if (n-ans*4 > 0 ) {++ans;}
        cout << ans  << '\n';
    }
}