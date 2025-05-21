#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> m;

    int k = 0;

    while ((1 << k) < m) {k++;}

    int total = 1 << (5 * k);
    int mask = (1 << k) - 1;

    for (int i = 0; i < total; i++){
        int x_1 = (i >> 0*k) & mask;
        int x_2 = (i >> 1*k) & mask;
        int x_3 = (i >> 2*k) & mask;
        int x_4 = (i >> 3*k) & mask;
        int x_5 = (i >> 4*k) & mask;
        if ((x_1 >= m) || (x_2 >= m) || (x_3 >= m) || (x_4 >= m) || (x_5 >= m)) {continue;}
        
        cout << x_5 << ' ' << x_4 << ' ' << x_3 << ' ' << x_2 << ' ' << x_1 << "\n";
    }
}