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

        for (int i=0; i<n-1; ++i) {cout << '0';}
            cout << '1';
        cout << '\n';
    }
}