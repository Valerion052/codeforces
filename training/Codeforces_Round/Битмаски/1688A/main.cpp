#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n==1) {cout << 3 << "\n"; continue;}
        int y=n&(-n);
        if (y==n) {y=n+1;}
        cout << y << "\n";
    }
}
