#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n], sum[n]{};
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    partial_sum(arr, arr+n, sum);
    long long Max = *max_element(arr, arr+n);

    if (sum[n-1]/2 >= Max && sum[n-1]%2 == 0) {cout << "YES";} else {cout << "NO";}
}