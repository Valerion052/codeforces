#include <iostream>

using namespace std;

long long calculate (long long a, long long b, long long x, long long y, long long n) {
    long long _a=a, _b=b, _x=x, _y=y, _n=n;
    _n -= min(_a-_x, n);
    _a -= min(_a-_x, n);
    _b -= min(_b-_y, _n);
    return _a*_b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        long long ans_1 = calculate(a, b, x, y, n);
        long long ans_2 = calculate(b, a, y, x, n);

        cout << min(ans_1, ans_2) << "\n";
        

    }
}