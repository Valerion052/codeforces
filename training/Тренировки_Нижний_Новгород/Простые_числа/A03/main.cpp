#include <iostream>

using namespace std;


bool check(long long k) {
    for (long long i=2; (long long)i*i<=k; ++i) {
        if (k%i==0) {return 0;}
    }
    return 1;
}


int main() {
    long long n;
    cin >> n;

    for (long long i = n+1; 1; ++i) {
        if (check(i)) {cout << i; return 0;}
    }
}