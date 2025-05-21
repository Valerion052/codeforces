#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i=0; i<n; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr+n, [](int x, int y){return x>y;});

        cout << (arr[0] + arr[1]) / 2;
    }
}