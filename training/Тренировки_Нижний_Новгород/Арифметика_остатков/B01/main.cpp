#include <iostream>

using namespace std;

int fact(int x) {
    int ans = 1;
    for (int i=2; i<=x; ++i) {ans*=i;}
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << fact(min(a, b));
}