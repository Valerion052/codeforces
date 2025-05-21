#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int _a = max(0, m-a);
        int _b = max(0, m-b);
        int _c = max(0, _a+_b-c);

        cout << 2*m-_c << '\n';
    }

    

}