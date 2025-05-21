#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << ' ' << max(x, y) << '\n';
    }
}