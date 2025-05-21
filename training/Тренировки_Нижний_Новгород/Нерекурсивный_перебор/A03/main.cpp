#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int k=0;
    while ((1 << k) < m) {++k;}
    int mask=(1<<k)-1;
    int total = 1 << (k*n);

    for (int i=0; i<total; ++i) {
        string s = "";
        bool flag=1;
        for (int j=0; j<n && flag; ++j) {
            int v = (i >> j*k) & mask;
            if (v>=m) {flag=0;}
            s = to_string(v) + " " + s;
        }
        if (flag) {cout << s << "\n";}
    }
}