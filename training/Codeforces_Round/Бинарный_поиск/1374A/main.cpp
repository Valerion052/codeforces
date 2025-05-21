#include <iostream>

using namespace std;

bool check(int x, int y, int n, int k) {
    return n>=(long long)x*k+y;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int x, y, n;

        cin >> x >> y >> n;

        int l=0, r=n, ans=0;
        while (l<=r) {
            int c = (l+r)/2;
            if (check(x, y, n, c)) {l=c+1; ans=c;}
            else {r=c-1;}
        }

        cout << ans*x+y << '\n';
    }
}