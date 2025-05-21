#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >>t;
    while (t--) {
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        int a = max(arr[0], arr[1]);
        int b = max(arr[2], arr[3]);

        sort(arr, arr+4);

        if (max(a, b)==arr[3] && min(a, b)==arr[2]) {cout << "YES\n";} else {cout << "NO\n";}

    }
}