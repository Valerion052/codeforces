#include <iostream>

using namespace std;

bool cheak(long long k) {
    for (long long i=2; (long long)i*i<=k; ++i) {
        if (k%i==0) {return 0;}
    }
    return 1;
}

int main() {
    long long n;
    cin >> n;

    if (cheak(n)) {cout << 1;}
    else if (n%2==0) {cout << 2;}
    else if (n%2!=0) {
        if (cheak(n-2)) {cout << 2;}
        else {cout << 3;}
    }
    
}