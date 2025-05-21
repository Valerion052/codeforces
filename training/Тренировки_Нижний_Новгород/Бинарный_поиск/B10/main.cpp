#include <iostream>
#include <cmath>

using namespace std;

long long n;

long long s(long long value) {
    long long sum = 0, x = value;
    while(x) {sum += x%10; x /= 10;}
    return sum;
}

long long f(long long x, long long k) {
    return (long long)x*x + (long long)x*k;
}

bool cheak(long long x, long long k) {
    return f(x, k) <= n;
}


int main() {
    cin >> n;

    for (int k=1; k<=9*19; ++k) {

        long long l = 1, r = sqrt(n), ans = 0;

        while (l<=r) {
            long long c = (l+r)/2;

            if (cheak(c, k)) {l = c + 1; ans=c;}
            else {r = c - 1;}
        }

        if (f(ans, k) == n) {
            if (s(ans) == k) {
                cout << ans;
                return 0;
            }
        }
    }
    cout << -1;
}