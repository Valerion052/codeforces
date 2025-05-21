#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    double l = 0, r = n;

    while (l<=r) {
        double c = (l+r)/2.0;
        double value = c;

        for (int i=0; i<m-1; ++i) {value *= c;}

        if (abs(n - value) <= 1e-07) {
            printf("%.6f", c);
            return 0;
        }
        else if (value > n) {r = c;}
        else {l = c;}
    }
}