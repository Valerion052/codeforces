#include <iostream>

using namespace std;

int n, k;

int f(int x) {
    int result = n, temp = x;
    while (temp>0) {result -= temp; temp /=k;}
    return result;
    }

int main() {
    cin >> n >> k;
    int l = 1, r = n;

    while (l<r) {
        int c = (l+r)/2;
        if (f(c) > 0) {l = c + 1;}
        else {r = c;}
    }
    cout << l;
}