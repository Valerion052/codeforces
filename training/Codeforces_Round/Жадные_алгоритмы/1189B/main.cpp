#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    sort(arr, arr+n);

    if (arr[n-1]>=arr[n-3]+arr[n-2]) {cout << "NO";}
    else {
        cout << "YES\n";
        swap(arr[n-1], arr[n-2]);
        for (int j=0; j<n; ++j) {cout << arr[j] << ' ';}
    }
}