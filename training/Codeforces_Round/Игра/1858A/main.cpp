#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int _c = c%2 ? c/2+1: c/2;
        if (a+_c>b+(c-_c)) {cout << "First\n";} else {cout << "Second\n";}
    }
}