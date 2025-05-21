#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n], arr_sum[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}
    
    sort(arr, arr+n, [](int x, int y){return x>y;});
    partial_sum(arr, arr+n, arr_sum);

    int* result = lower_bound(arr_sum, arr_sum+n, m);

    if (arr_sum+n==result) {cout << -1;}
    else {cout << distance(arr_sum, result)+1;}

}