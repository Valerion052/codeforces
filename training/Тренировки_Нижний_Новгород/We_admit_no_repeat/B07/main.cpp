#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], arr_sum[n]{};
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    partial_sum(arr, arr+n, arr_sum);

    int value = arr_sum[n-1]/2;
    if (arr_sum[n-1]%2 != 0) {++value;} 

    int* result = lower_bound(arr_sum, arr_sum+n, value);

    // cout << *result;

    cout << distance(arr_sum, result) + 1;
    
}