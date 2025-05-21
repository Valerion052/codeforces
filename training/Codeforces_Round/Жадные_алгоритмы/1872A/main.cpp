#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = (a+b) - 2 * min(a, b);
        if (ans%(2*c)!=0) {cout << ans/(2*c)+1;} else {cout << ans/(2*c);}
        cout << '\n';
    }
}