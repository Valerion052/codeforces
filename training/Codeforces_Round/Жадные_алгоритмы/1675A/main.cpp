#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x=max(x-a, 0);
        y=max(y-b, 0);
        int ans = x+y-c;
        if (ans <= 0) {cout << "YES\n";} else {cout << "NO\n";}
    }
}