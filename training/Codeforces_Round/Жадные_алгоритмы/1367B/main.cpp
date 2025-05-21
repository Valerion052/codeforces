#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result_even = 0, result_odd = 0;

        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;

            if (i%2 == 0) {
                if (num%2!=0) {++result_even;}
            }
            else {
                if (num%2==0) {++result_odd;}
            }
        }

        int result = result_even + result_odd;

        if (result%2!=0 || result_even != result_odd) {cout << -1;} else {cout << result/2;}
        cout << '\n';
    }

}