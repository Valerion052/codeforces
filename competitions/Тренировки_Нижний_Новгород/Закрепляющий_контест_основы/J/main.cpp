#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], arr_1[n], arr_2[n];

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        }

    partial_sum(arr, arr+n, arr_1);
    reverse(arr, arr+n);
    partial_sum(arr, arr+n, arr_2);
    reverse(arr_2, arr_2+n);

    int counter = 0;

    for (int j=0; j<n-1; ++j) {
        if (arr_1[j] == arr_2[j+1]){ ++counter;}
    }

    cout << counter;
}