#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        for (int i=1; i<=n; ++i) {if (i%2!=0) {cout << i << ' ';}}
        for (int i=n; i>0; --i) {if (i%2==0) {cout << i << ' ';}}
        cout << "\n";


    }
}
