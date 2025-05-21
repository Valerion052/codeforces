#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int arr[n+1][n+1]{};

    for (int i=0; i<m; ++i) {
        int _n, _m;
        cin >> _n >> _m;

        ++arr[min(_n, _m)][max(_n, _m)];
        if (_n==_m || arr[min(_n, _m)][max(_n, _m)]>1) {cout << "No"; return 0;}
    }

    cout << "Yes";

}