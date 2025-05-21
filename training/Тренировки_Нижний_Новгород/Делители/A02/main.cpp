#include <iostream>

using namespace std;

int getD(long long n) {
    int ans = 0;
    for (long long i=1; (long long)i*i<=n; ++i) {
        if (n%i==0) {
            ++ans;
            if (i!=n/i) {
                ++ans;
            }
        }
    }
    return ans;
}

int main() {
    long long n;
    cin >> n;
    cout << getD(n);
}