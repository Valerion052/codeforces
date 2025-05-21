#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int value_1 = (k * l)/(nl*n);
    int value_2 = (c * d)/n;
    int value_3 = p/(np*n);

    cout << min(min(value_1, value_2), value_3);

}