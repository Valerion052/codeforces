#include <iostream>

using namespace std;

long long euler(long long k) {
    long long ans = 1;
    for (long long i=2; i*i<=k; ++i) {
        if (k%i==0) {
            k/=i;
            ans *= i-1;
            while(k%i==0) {
                k/=i;
                ans *= i;
            }
        }
    }
    if (k>1) {ans *= k-1;}
    return ans;
}

int main() {
    long long n;
    cin >> n;

    cout << euler(n);
}