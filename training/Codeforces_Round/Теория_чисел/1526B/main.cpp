#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int a = n%11;
        int b = n/11/10;
        if (b>=a) {cout << "YES\n";} else {cout << "NO\n";}
    }
}