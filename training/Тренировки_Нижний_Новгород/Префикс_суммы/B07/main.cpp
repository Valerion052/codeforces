#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long p, q, r;
    cin >> n >> p >> q >> r;

    long long arr[n];
    for (int i=0; i<n; ++i) {cin >> arr[i];}

    long long arr_sum_r[n];
    arr_sum_r[n - 1] = r * arr[n - 1];
    for (int _r=n-2; _r>=0; --_r) {arr_sum_r[_r] = max(arr[_r]*r, arr_sum_r[_r+1]);}

    long long max_p = arr[0]*p, result=max_p + arr[0]*q + arr_sum_r[0];
    for (int j=1; j<n; ++j) {

        max_p = max(max_p, arr[j]*p);
        long long value = max_p + arr[j]*q + arr_sum_r[j];
        result = max(result, value);
    }

    cout << result; 
}