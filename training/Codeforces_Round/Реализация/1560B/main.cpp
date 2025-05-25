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

        long long x=abs(b-a)*2;

        if (a>x || b>x || c>x) {cout << -1;}
        else {
            long long y = x/2+c;
			if (y>x) {y-=x;}
            cout << y;
        }
        cout << "\n";
    }
}