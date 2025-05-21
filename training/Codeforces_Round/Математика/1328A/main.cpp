#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long c = a/b;
        if (a%b!=0) {++c;}
        cout << b*c-a << '\n';
    }
}