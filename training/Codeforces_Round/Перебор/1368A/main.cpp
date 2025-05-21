#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long _a = min(a, b);
        long long _b = max(a, b);

        int count=0;
        while(1) {
            if (_a>n || _b>n) {cout << count << "\n"; break;}
            ++count;
            long long __a=_a+_b, __b=_b;
            _a = min(__a, __b);  _b = max(__a, __b);
        }
    }
}