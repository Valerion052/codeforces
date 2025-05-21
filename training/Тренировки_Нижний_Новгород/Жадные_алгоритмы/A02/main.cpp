#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n];
    int result=0;

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n, [](int x, int y) {return x>y;});

    for (int j=0; j<n; ++j) {
        if (m <= 0) {break;}
        m -= arr[j];
        ++result;
    }

    if (m>0) {cout << -1;} else {cout << result;}
}