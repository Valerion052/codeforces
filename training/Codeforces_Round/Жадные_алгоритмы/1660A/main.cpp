#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a==0) {cout << 1;}
        else if (b==0) {cout << a+1;}
        else {cout << b*2+a+1;}
        cout << '\n';
    }
}
