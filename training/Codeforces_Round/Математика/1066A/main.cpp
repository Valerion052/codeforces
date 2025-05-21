#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int L, v, l, r;
        cin >> L >>v >> l >> r;

        int a = L/v;
        int b=r/v-(l-1)/v;
        cout << a-b << "\n";
    }
}