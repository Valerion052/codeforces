#include <iostream>

using namespace std;

int c, m, x, n;

bool cheak(int k) {
    return k<=c && k<=m && k*3<=n;
}

int main() {
    int q;
    cin >> q;

    while(q--) {
        cin >> c >> m >> x;

        n = c + m + x;

        int l=0, r=n, ans=0;

        while (l <=r) {
            int c = (l+r)/2;
            if (cheak(c)) {l = c + 1; ans = c;}
            else {r = c - 1; }
        }

        cout << ans << '\n';
    }
}