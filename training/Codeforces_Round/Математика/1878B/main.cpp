#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        arr[0] = 6;
        arr[1] = 7;

        int lag = 7;
        cout << arr[0] << ' ' << arr[1] << ' ';
        for (int i=2; i<n; ++i) {
            ++lag;
            if (lag*3%(arr[i-2] + arr[i-1])==0) {lag = (arr[i-2] + arr[i-1])+1;}
            arr[i] = lag;
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}