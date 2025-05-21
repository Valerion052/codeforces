#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int _l = min(l, r);
        int _r = max(l, r);
        int _m = m;

        
        _r=min(_r, m);
        m-=min(r, m);
        _l=0-m;
        cout << _l << ' ' << _r << "\n";




        
    }
}