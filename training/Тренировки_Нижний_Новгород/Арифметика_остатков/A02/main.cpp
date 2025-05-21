#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b==0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long _a = max(a, b);
    long long _b = min(a, b);

    cout << gcd(_a, _b);

}