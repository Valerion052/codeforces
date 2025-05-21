#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int full = (n*(n-1))/2;

    if (n<4) {cout << "NO";}
    else {
        if (m <= 1 || m==full || m==full-1) {cout << "NO";}
        else {cout << "YES";}
    }

}
