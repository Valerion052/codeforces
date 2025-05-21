#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);

    int f_1 = count(arr, arr+n, arr[0]);
    int f_2 = count(arr, arr+n, arr[n-1]);

    cout << arr[n-1] - arr[0]<< ' ';

    if(arr[0] == arr[n-1]) {
        cout << (long long) n * (n - 1) / 2;
        } else {
            cout << (long long)f_1 * f_2;
            }
}

