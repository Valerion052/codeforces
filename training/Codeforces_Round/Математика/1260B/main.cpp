#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long _min = min(a, b);
        long long _max = max(a, b);

        if (_min*2 > _max && (_min+_max)%3==0) {cout << "YES\n";}
        else if (_min*2 == _max) {cout << "YES\n";}
        else {cout << "NO\n";}
    }
}