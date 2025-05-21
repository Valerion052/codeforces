#include <iostream>

using namespace std;

long long sum(long long x, long long y, long long m) {
    long long ans = 0;
    x%=m;
    y%=m;
    while (y>0) {
        if (y & 1) {
            ans = (ans + x)%m;
        }
        x = (2*x)%m;
        y>>=1;
    }
    return ans;

}

int main() {
    long long x, y, m;
    cin >> x >> y >> m;

    long long ans = sum(x, y, m);

    cout << ans;
}
