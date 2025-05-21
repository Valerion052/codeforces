#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[4];
    for (int i=0; i<4; ++i) {cin >> arr[i];}
    sort(arr, arr+4);

    int a, b, c;

    a = arr[3] - arr[2];
    b = arr[3] - arr[1];
    c = arr[3] - a - b;

    cout << a << ' ' << b << ' ' << c;
}