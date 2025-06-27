#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--) {
        int x, y, k; cin >> x >> y >> k;

        int _x = x/k+min(1, x%k);
        int _y = y/k+min(1, y%k);

        cout << min(_x, _y)*2 + abs(_x-_y)*2 - (_x>_y) << "\n";
    }
}