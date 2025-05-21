#include <iostream>

using namespace std;

const int arr[27] = {1, 3, 3, 4, 4, 5, 5, 6, 6, 1, 2, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 1, 2};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

    if (n%2==0) {
        for (int i=1; i<=n/2; ++i) {cout << i << ' ' << i << ' ';}
    }
    else if ((n-27)%2==0 && n>=27) {

        int lag = 14;

        for (int x: arr) {cout << x  << ' ';}

        for (int k = 0; k < (n-27)/2; ++k) {
            cout << lag << ' ' << lag << ' ';
            ++lag;}
    }
    else {cout << -1;}
    cout << '\n';
    }
    
}