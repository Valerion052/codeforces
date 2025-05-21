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

        if (n<5) {cout << -1 << '\n';}
        else {
            for (int i=7; i<=n; i+=2) {cout << i << ' ';}
            cout << "3 1 5 4 2 ";
            for (int i=6; i<=n; i+=2) {cout << i << ' ';}
            cout  << '\n';
        }
    }
}