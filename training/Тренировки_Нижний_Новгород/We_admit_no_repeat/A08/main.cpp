#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n], sum[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    sort(arr, arr+n);
    partial_sum(arr, arr+n, sum);
    int* index = upper_bound(sum, sum+n, m);

    if (index == arr) {
        cout << 0;
    } else {
        cout << distance(sum, index);
    }
}