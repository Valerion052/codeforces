#include <iostream>

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int MIN = 2;
    int MAX = n;

    for (int i=0; i<k; ++i) {cout << MAX << ' '; --MAX;}
    cout << 1 << ' ';
    for (int j=0; j<n-k-1; ++j) {cout << MIN << ' '; ++MIN;}

}