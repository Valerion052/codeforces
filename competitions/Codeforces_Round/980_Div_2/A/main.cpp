#include <iostream>

using namespace std;

bool f(long long a, long long b ,long long x) {
    return b-2*x > a-x;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        long long l = 0, r = a, ans = a;

        while (l<=r) {
            long long c = (l+r)/2;

            if (f(a, b, c)) {l=c+1;}
            else {r=c-1; ans = c;}
        }

        cout << a - ans << '\n';

    }
}
