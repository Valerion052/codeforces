#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr_w[n], arr_h[n], arr_h_sort[n];

    int W = 0;

    for (int i=0; i<n; ++i) {
        cin >> arr_w[i] >> arr_h[i];

        W += arr_w[i];
        arr_h_sort[i] = arr_h[i];
    }

    sort(arr_h_sort, arr_h_sort+n);

    for (int i=0; i<n; ++i) {
        int m;
        if (arr_h[i] == arr_h_sort[n-1]) {m = arr_h_sort[n-2];}
        else {m = arr_h_sort[n-1];}
        cout << (W - arr_w[i]) * m << ' ';
    }

}